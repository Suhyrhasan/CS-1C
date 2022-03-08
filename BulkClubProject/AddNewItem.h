/** \class AddNewItem
 * Class that displays a window which lets the user add an item and its price to the inventory.
 */
#ifndef ADDNEWITEM_H
#define ADDNEWITEM_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include "dbManager.h"

namespace Ui {
class AddNewItem;
}
/**
* @brief Receives input for adding new items.
*/
class AddNewItem : public QDialog
{
    Q_OBJECT

public:

    explicit AddNewItem(QWidget *parent = 0);
    ~AddNewItem();

private slots:
    /** \fn on_PushButton_AddItem_clicked()
         * The pushbutton adds a new item into the database.
         * @param nonthing passed in
         * @return nothing returned
         */
    void on_PushButton_AddItem_clicked();

    /** \fn on_PushButton_BackToMain_clicked()
         * The pushbutton close addnNewItem window.
         * @param nonthing passed in
         * @return nothing returned
         */
    void on_PushButton_BackToMain_clicked();

signals:
    /** \fn itemAdded()
         * emits itemAdded() when an item is successfully added to the database
         * @param nonthing passed in
         * @return a signal if new item is added.
         */
    void itemAdded();

private:
    Ui::AddNewItem *ui; /// Pointer to this UI
};

#endif // ADDNEWITEM_H
