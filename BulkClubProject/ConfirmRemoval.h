/** Class ConfirmRemoval.h
*	Class prompts user to confirm their decision for deleting a member or inventory item.
*/
#ifndef CONFIRMREMOVAL_H
#define CONFIRMREMOVAL_H

#include <QDialog>
#include <QAbstractTableModel>
#include "Models.h"

namespace Ui {
class ConfirmRemoval;
}
/**
* @brief Receives input for confirming member or item deletion.
*/
class ConfirmRemoval : public QDialog
{
    Q_OBJECT

public:
    explicit ConfirmRemoval(QWidget *parent = 0);
    ~ConfirmRemoval();

private slots:
    void setMemberView(MemberModel *model);
    void setItemView(ItemModel *model);

    void on_PushButton_ConfirmRemoval_clicked();

    void on_PushButton_BackToAdmin_clicked();

signals:
    void removalConfirmed();

private:
    Ui::ConfirmRemoval *ui; /// Pointer to this UI
};

#endif // CONFIRMREMOVAL_H
