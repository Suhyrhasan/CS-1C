/** Class Purchase.h
*	Class contains data in regard to members purchases within the databse.
*/
#ifndef PURCHASE_H
#define PURCHASE_H

#include <QDate>
#include "Item.h"

const float TAX_RATE = 0.0775;

/**
* @brief Contains property values of a transaction from the database.
*/
class Purchase
{
public:
    /** \fn Purchase()
         * Constructor initialize private varibales
         * @param nothing passed in
         * @return nothing returned
         */
    Purchase(): purchaseDate(1970, 1, 1), itemPurchased("", 0.0){
        membersID = 0;
        quantityPurchased = 0;
        purchaseSubtotal = 0.0;
        purchaseTotal = 0.0;
    }

    /** \fn Purchase(QDate transDate, int bID, Item item, int quantity, float transSub, float transTotal)
         * Parameterized Constructor initialize private varibales
         * @param QDate transDate, int bID, Item item, int quantity, float transSub, float transTotal
         * @return nothing returned
         */
    Purchase(QDate transDate, int bID, Item item, int quantity, float transSub, float transTotal){
        purchaseDate = transDate;
        membersID = bID;
        itemPurchased = item;
        quantityPurchased = quantity;
        purchaseSubtotal = transSub;
        purchaseTotal = transTotal;
    }

    /** \fn GetPurchaseDate() const
         * This functions return purchase
         * @param nonthing passed in
         * @return QDate purchaseDate
         */
    QDate GetPurchaseDate() const{return purchaseDate;}

    /** \fn GetMemberID() const
         * This functions return member id
         * @param nonthing passed in
         * @return int memberID
         */
    int GetMemberID() const{return membersID;}

    /** \fn GetItem( const
         * This functions return items purchased
         * @param nonthing passed in
         * @return Item itemPurchased
         */
    Item GetItem() const{return itemPurchased;}

    /** \fn GetItemName() const
         * This functions return item name
         * @param nonthing passed in
         * @return QString  itemPurchased.GetItemName()
         */
    QString GetItemName() const{return itemPurchased.GetItemName();}

    /** \fn GetQuantityPurchased() const
         * This functions return quantity purchased
         * @param nonthing passed in
         * @return int quantityPurchased
         */
    int GetQuantityPurchased() const{return quantityPurchased;}

    /** \fn GetPurchaseSubTotal() const
         * This functions return subtotal
         * @param nonthing passed in
         * @return float purchaseSubtotal
         */
    float GetPurchaseSubTotal() const{return purchaseSubtotal;}

    /** \fn GetPurchaseTotal()
         * This functions return purchase total
         * @param nonthing passed in
         * @return float purchaseTotal
         */
    float GetPurchaseTotal() const{return purchaseTotal;}

private:
    QDate  purchaseDate;     /// Purchase Date
    int    membersID;        /// Members ID
    Item   itemPurchased;    /// Item Purchased
    int    quantityPurchased;/// Quantity Purchased
    float  purchaseSubtotal; /// Purchase Subtotal
    float  purchaseTotal;    /// Purchase Total
};

#endif // PURCHASE_H
