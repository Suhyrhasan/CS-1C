/** \class Credentials
 * Class that contains data in regard to admin login within the databse.
 */
#ifndef CREDENTIALS_H
#define CREDENTIALS_H

#include <QObject>

/**
* @brief Loads username and password pairs from the database.
*/
class Credentials
{
public:
    /** \fn Credentials(QString usern, QString passw)
         * Parameterized Constructor to initialize varibales
         * @param QString name, float price
         * @return nothing returned
         */
    Credentials(QString usern, QString passw)
    {
        username = usern;
        password = passw;
    }

    /** \fn GetUsername() const
         * This functions return username
         * @param nonthing passed in
         * @return QString username
         */
    QString GetUsername() const
    {
        return username;
    }

    /** \fn GetPassword() const
         * This functions return password
         * @param nonthing passed in
         * @return QString password
         */
    QString GetPassword() const
    {
        return password;
    }
private:
    QString username; /// username
    QString password; /// password
};
#endif // CREDENTIALS_H
