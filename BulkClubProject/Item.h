/** \class Item
 * Class that contains data in regard to items within the databse.
 */
#ifndef ITEM_H
#define ITEM_H

#include <QObject>

/**
* @brief Contains property values of an item from the database.
*/
class Item
{
public:
    /** \fn Item()
         * Constructor initialize private varibales
         * @param nothing passed in
         * @return nothing returned
         */
    Item(){
        itemName = "";
        itemPrice = 0.00;
    }

    /** \fn Item(QString name, float price)
         * Parameterized Constructor initialize private varibales
         * @param QString name, float price
         * @return nothing returned
         */
    Item(QString name, float price){
        itemName = name;
        itemPrice = price;
    }

    /** \fn GetItemName() const
         * This functions return item name
         * @param nonthing passed in
         * @return QString itemName
         */
    QString GetItemName() const{return itemName;}

    /** \fn GetItemPrice() const
         * The function returns item price.
         * @param nonthing passed in
         * @return float  itemPrice
         */
        float GetItemPrice() const{return itemPrice;}
private:
    QString itemName; /// item name
    float  itemPrice; /// item price
};

#endif // ITEM_H
