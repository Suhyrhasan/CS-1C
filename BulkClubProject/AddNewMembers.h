/** \class AddNewMembers.h
*	Class that displays a window which lets the user add a member as well as their details.
*
* Details include membership type, ID, and member expiration date.
*/
#ifndef ADDNEWMEMBERS_H
#define ADDNEWMEMBERS_H

#include <QDialog>
#include "dbManager.h"
#include "AddNewPurchase.h"

namespace Ui {
class AddNewMembers;
}
/**
* @brief Receives input for adding new members.
*/
class AddNewMembers : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewMembers(QWidget *parent = nullptr);
    ~AddNewMembers();

    /** \fn lockInputs()
         * This function disables all the line edits.
         * @param nonthing passed in
         * @return nothing returned
         */
    void lockInputs();
    /** \fn enableInputs()
         * This function enables all the line edits.
         * @param nonthing passed in
         * @return nothing returned
         */
    void enableInputs();

private slots:
    /** \fn on_PushButton_AddMember_clicked()
         * The pushbutton adds a new member into the database.
         * @param nonthing passed in
         * @return nothing returned
         */
    void on_PushButton_AddMember_clicked();

    /** \fn checkInput(const QString& text)
         * The functions will enable addMember push button if everything si filled out.
         * @param const QString& text
         * @return nothing returned
         */
    void checkInput(const QString& text);

    /** \fn on_PushButton_Yes_clicked()
         * The pushbutton adds a new member into the database.
         * @param nonthing passed in
         * @return nothing returned
         */
    void on_PushButton_Yes_clicked();

    /** \fn on_PushButton_No_clicked()
         * The pushbutton adds a new member into the database.
         * @param nonthing passed in
         * @return nothing returned
         */
    void on_PushButton_No_clicked();

    /** \fn on_PushButton_BackToMain_clicked()
         * The pushbutton close addnNewItem window.
         * @param nonthing passed in
         * @return nothing returned
         */
    void on_PushButton_BackToMain_clicked();

signals:
    /** \fn sendID(int id)
         * emits sendID(int id) when an id is successfully sent
         * @param nonthing passed in
         * @return a signal when id is sent.
         */
    void sendID(int id);

    /** \fn memberAdded()
         * emits memberAdded() when an member is successfully added to the database
         * @param nonthing passed in
         * @return a signal if new member is added.
         */
    void memberAdded();

    /** \fn purchaseAdded()
         * emits purchaseAdded() when an purchase is successfully added to the database
         * @param nonthing passed in
         * @return a signal if new purchase is added.
         */
    void purchaseAdded();

private:
    Ui::AddNewMembers *ui; /// Pointer to this UI
};

#endif // ADDNEWMEMBERS_H
