/** \class ModifyItem
 * Class that displays a window which lets the user modify an item and its price to the inventory.
 */
#ifndef MODIFYITEM_H
#define MODIFYITEM_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include "dbManager.h"

namespace Ui {
class ModifyItem;
}

/**
* @brief Receives input for modifying new items.
*/
class ModifyItem : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyItem(QWidget *parent = 0, Item item = Item());
    ~ModifyItem();

private slots:
    /** \fn on_PushButton_ModifyItem_clicked()
         * The pushbutton modifies an item price into the database.
         * @param nonthing passed in
         * @return nothing returned
         */
    void on_PushButton_ModifyItem_clicked();

    /** \fn on_PushButton_BackToMain_clicked()
         * The pushbutton close addnNewItem window.
         * @param nonthing passed in
         * @return nothing returned
         */
    void on_PushButton_BackToMain_clicked();

signals:
    /** \fn ModifyConfirmed()
         * emits ModifyConfirmed() when an item is successfully modified in the database
         * @param nonthing passed in
         * @return a signal when item is modified.
         */
    void ModifyConfirmed();

private:
    Ui::ModifyItem *ui; //! Pointer to this UI
    Item itemToModify;  //! Struct to modify item data
};

#endif // MODIFYITEM_H
