#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql>
#include <QList>
#include <QFile>
#include <QString>
#include <fstream>
#include <string>
#include "Credentials.h"
#include "Member.h"
#include "Purchase.h"
#include "Item.h"
using namespace std;

/*! The Database
 * \brief The Database class
 * Class to handle all functionality of a SQLite database.
 * Allows only a single instance to be created and uses
 * that instance throughout execution. All data will be
 * represented in QList and queries.
 */

class dbManager
{
public:
    static dbManager& instance();   //! Pointer to the actual database
    dbManager(const dbManager&) = delete;
    void operator=(const dbManager&) = delete;

    // Login

    bool VerifyLogin(const Credentials& credentials, QString& employeeType);

    // Members
    bool AddMember(const Member& newMember);
    bool RemoveMember(const Member& member);
    bool MemberExists(const int memberID);
    Member GetMember(int memberID);
    QList<Member> GetAllMembers();
    QList<Member> GetUpgrades();
    QList<Member> GetDowngrades();
    QList<Member> GetExpirations(int month);
    QList<Member> GetRebates();

    // Purchases
    bool AddPurchase(const Purchase& newPurchase);
    bool PurchaseExists(const Purchase& Purchase);
    bool PurchaseUpdateInventory(const Purchase newPurchase);
    bool PurchaseUpdateMemberTotalSpent(const Purchase newPurchase);
    bool PurchaseUpdateMemberRebate(const Purchase newPurchase);
    QList<Purchase> GetAllPurchases();
    // used for manager page to constantly update subtotal, tax, and total
    float CalcGrossSales();
    float CalcGrossSalesByDate(QDate tDate);
    float CalcGrossSalesByMember(int buyersID);
    float CalcGrossSalesByMember(QString bName);
    float CalcGrossSalesByMember(MemberType mType);
    float CalcGrossSalesByItem(QString itemName);
    int GetTotalShoppers(MemberType mType);
    int GetTotalShoppersByDate(QDate, MemberType mType);
    int GetTotalShoppersByItem(QString itemName, MemberType mType);

    // used for manager page to constantly update quantity
    int GetTotalQuantity();
    int GetTotalQuantityByDate(QDate tDate);
    int GetTotalQuantityByMember(int buyersID);
    int GetTotalQuantityByMember(QString bName);
    int GetTotalQuantityByMember(MemberType mType);
    int GetTotalQuantityByItem(QString itemName);

    // Inventory
    bool AddItem(const Item& newItem);
    bool RemoveItem(const Item& item);
    bool ItemExists(const Item& item) const;
    Item GetItem(QString itemName);
    float GetItemPrice(QString itemName);
    QList<Item> GetAllItems();
    QStringList GetAllItemNames();
    bool  modifyItem(const Item& item);  //! Modifies information of specific item in database

    // Connection Test
    bool isOpen() const;

    // Retrieve boundaries of Purchase dates
    bool GetValidDates(QDate& earliestDate, QDate& latestDate);

private:
    dbManager(); //! Private Constructor for single instance
    ~ dbManager(); //! Private Destructor for single instance
    QSqlDatabase bulkdb; //! SQLite Database manager
};

#endif // DBMANAGER_H
