/******************************************************************************
 * PROGRAMMERS: - Jonathan Aguirre
 *              - Tina     Faraji
 *              - Suhyr    Hasan
 *              - Weston   Mathews
 * CLASS      : CS1C
 * SECTION    : MW 5:00p - 7:30p
 * DUE DATE   : 02/23/20
 *****************************************************************************/
#include "Review.h"
#include "mainwindow.h"
#include "ui_Review.h"

Review::Review(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Review)
{
    ui->setupUi(this);

    ui->CompanyNameComboBox->addItem(" ");
    ui->CompanyNameComboBox->addItem("FBI");
    ui->CompanyNameComboBox->addItem("CIA");
    ui->CompanyNameComboBox->addItem("Cisco");
    ui->CompanyNameComboBox->addItem("Amazon");
    ui->CompanyNameComboBox->addItem("Los Angeles Airport");
    ui->CompanyNameComboBox->addItem("Los Angeles Dodgers");
    ui->CompanyNameComboBox->addItem("Orange County Airport");
    ui->CompanyNameComboBox->addItem("Los Angeles Angels of Anaheim");
}

Review::~Review()
{
    delete ui;
}

/******************************************************************
* on_pushButton_SendReview_clicked()
* -----------------------------------------------------------------
* This will allow the user to select the name of their organization
* as well as typing in a review. Once the button is clicked, the
* information they had entered will be saved and sent to the
* database where it will reload upon re-execution of the program.
* Once they send their review, they will be taken back to the
* homepage.
******************************************************************/
void Review::on_pushButton_SendReview_clicked()
{
    database = new Database("MegaQTDB.db", "QSQLITE");

    QSqlQuery query(*database);
    int       count = 1;
    QString   namesAr[100];

    count = database -> ReturnNames(namesAr);

    enum Name
    {
        EMPTY,//0
        OC_AIRPORT, //1
        LA_AIRPORT,//2
        FBI,//3
        CIA,//4
        LA_DODGERS,//5
        LA_ANGELS,//6
        AMAZON,//7
        CISCO,//8
    };

    int customerID;

    QString name       = ui -> CompanyNameComboBox -> currentText();
    QString reviewText = ui -> textEdit            -> toPlainText();

    /******************************************************************
    * PROCESSING - For each name, cast it into the correct enumertor.
    ******************************************************************/
    switch(name.toStdString()[0])
    {
    case 'A': customerID = AMAZON;
        break;
    case 'C': if(name.at(1) == 'I')
        {
            customerID = CIA;
        }
        else
        {
            customerID = CISCO;
        }
        break;
    case 'F': customerID = FBI;
        break;
    case 'L': if(name.at(12) == 'D')
        {
            customerID = LA_DODGERS;
        }
        else if(name.at(13) == 'i')
        {
            customerID = LA_AIRPORT;
        }
        else
        {
            customerID = LA_ANGELS;
        }
        break;
    case 'O': customerID = OC_AIRPORT;
        break;
    }


    qDebug() << "Name is: "   << name << endl;
    qDebug() << "Enum is: "   << customerID << endl;
    qDebug() << "Review is: " << reviewText << endl;

    query.prepare("INSERT INTO reviews VALUES (:reviewID, :customerID, :reviewText)");

    query.bindValue(":reviewID"  , count + 1);
    query.bindValue(":customerID", customerID);
    query.bindValue(":reviewText", reviewText);

    if(!query.exec())
    {
        //output the error code like "whoopsie!"
        qDebug() << query.lastError().text();
    }


    //hide the review page
    hide();
}

/******************************************************************
* on_ShowOldReviews_clicked()
* -----------------------------------------------------------------
* This method will read all reviews .
******************************************************************/
void Review::on_ShowOldReviews_clicked()
{
    QString namesAr  [100];
    QString reviewsAr[100];
    int     index;
    int     count = 0;

    ui -> listWidget -> clear();
    ui -> listWidget -> addItem("Old Reviews\n\n");

    /*******************
     * INITIALIZATIONS *
     *******************/
    database = new Database("MegaQTDB.db", "QSQLITE");
    index    = 0;

    count = database -> ReturnNames (namesAr);
    database -> ReturnReviews(reviewsAr);

    /************************************************************
    * OUTPUT - All names and reviews to the old revews section
    *          of the reviews page to the list widget
    ************************************************************/
    while(index < count)
    {//begin while

        ui -> listWidget -> addItem(namesAr[index]);
        ui -> listWidget -> addItem(reviewsAr[index]);
        ui -> listWidget -> addItem("\n");

        index++;

    }//end while
}
/************************************************************
* on_pushButtonBackMain_clicked()
* ----------------------------------------------------------
* This will allow the user to go back to the main window.
************************************************************/
void Review::on_pushButton_FAdminTMain_clicked()
{
    // Hide the HelpWindow itself
    hide();

    // Show the MainWindow (i.e. the parent window)
    MainWindow *newmain= new MainWindow();
    newmain->show();
}
