/******************************************************************************
 * PROGRAMMERS: - Jonathan Aguirre
 *              - Tina     Faraji
 *              - Suhyr    Hasan
 *              - Weston   Mathews
 * CLASS      : CS1C
 * SECTION    : MW 5:00p - 7:30p
 * DUE DATE   : 02/23/20
 *****************************************************************************/
#ifndef REVIEW_H
#define REVIEW_H

#include <QDialog>
#include <QString>
#include "Database.h"

namespace Ui {
class Review;
}

class Review : public QDialog
{
    Q_OBJECT

public:
    explicit Review(QWidget *parent = nullptr);
    ~Review();

    void AddNamesAndReviewsToListWidget();

private slots:
    void on_pushButton_SendReview_clicked();

    void on_pushButton_FAdminTMain_clicked();

    void on_ShowOldReviews_clicked();

private:
    Ui::Review *ui;
    Database   *database;

};

#endif // REVIEW_H

