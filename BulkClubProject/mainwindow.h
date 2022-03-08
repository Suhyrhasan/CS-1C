/** Class MainWindow.h
*	Class that displays a window which prompts the user to enter a username and password.
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>
#include "dbManager.h"
#include "Credentials.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
* @brief Receives input for user login.
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_PushButton_login_clicked();

private:
    Ui::MainWindow *ui; /// Pointer to this UI
};
#endif // MAINWINDOW_H
