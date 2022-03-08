/** Class Member.h
*	Class contains data in regard to members within the databse.
*/

#ifndef MEMBER_H
#define MEMBER_H

#include <QDate>

enum MemberType {REGULAR, EXECUTIVE};
const float REBATE_RATE = 0.04;

/**
* @brief Contains property values of a member from the database.
*/
class Member
{
public:
    /** \fn Member(QString name, int id, int renewCost);
         * Parameterized Constructor initialize private varibales
         * @param QString name, int id, int renewCost
         * @return nothing returned
         */
    Member(QString name, int id, int renewCost){
        memberName      = name;
        memberID        = id;
        memberRenewal   = renewCost;
        rebate          = 0.00;
        totalSpent      = 0.00;
    }

    /** \fn Member(QString name, int id, float rebateAmt)
         * Parameterized Constructor initialize private varibales
         * @param QString name, int id, float rebateAmt
         * @return nothing returned
         */
    Member(QString name, int id, float rebateAmt){
        memberName = name;
        memberID   = id;
        rebate     = rebateAmt;
        totalSpent = 0.0;
    }

    /** \fn Member(QString name, int id, MemberType mType, QDate expDate)
         * Parameterized Constructor initialize private varibales
         * @param QString name, int id, MemberType mType, QDate expDate
         * @return nothing returned
         */
    Member(QString name, int id, MemberType mType, QDate expDate){
        memberName      = name;
        memberID        = id;
        membership      = mType;
        expirationDate  = expDate;
        rebate          = 0.00;
        totalSpent      = 0.00;
    }

    /** \fn Member(QString name, int id, MemberType mType, QDate expDate, float rebateAmt, float totSpent)
         * Parameterized Constructor initialize private varibales
         * @param QString name, int id, MemberType mType, QDate expDate, float rebateAmt, float totSpent
         * @return nothing returned
         */
    Member(QString name, int id, MemberType mType, QDate expDate, float rebateAmt, float totSpent){
        memberName      = name;
        memberID        = id;
        membership      = mType;
        expirationDate  = expDate;
        rebate          = rebateAmt;
        totalSpent      = totSpent;
    }

    /** \fn GetMemberName() const
         * This functions return member name
         * @param nonthing passed in
         * @return QString memberName
         */
    QString GetMemberName() const{return memberName;}

    /** \fn GetID() const
         * This functions return member id
         * @param nonthing passed in
         * @return int memberID
         */
    int GetID() const{return memberID;}

    /** \fn GetMembershipTypeString() const
         * This functions return membership Type
         * @param nonthing passed in
         * @return MemberType  membership
         */
    QString GetMembershipTypeString() const{
        QString membershipType;

        switch(membership)
        {
        case REGULAR:
            membershipType = "Regular";
            break;
        case EXECUTIVE:
            membershipType = "Executive";
            break;
        };

        return membershipType;
    }

    /** \fn GetExpirationDateString() const
         * This functions return member expiration date
         * @param nonthing passed in
         * @return QDate expirationDate
         */
    QString GetExpirationDateString() const{return expirationDate.toString("MM/dd/yyyy");}

    /** \fn GetRebate() const
         * This functions return member Rebate
         * @param nonthing passed in
         * @return float rebate
         */
    float GetRebate() const{return rebate;}

    /** \fn GetTotalSpent() const
         * This functions return total spent
         * @param nonthing passed in
         * @return float totalSpent
         */
    float GetTotalSpent() const{return totalSpent;}

    /** \fn GetRenewCost() const
         * This functions returns renewal cost
         * @param nonthing passed in
         * @return int memberRenewal
         */
    int GetRenewCost() const{return memberRenewal;}

    /** \fn isExecutive() const
         * This functions return a boolean expression
         * @param nonthing passed in
         * @return Boolean Expression
         */
    bool isExecutive() const{
        bool executiveMember;

        if(membership == EXECUTIVE)
        {
            executiveMember = true;
        }
        else
        {
            executiveMember = false;
        }

        return executiveMember;
    }
private:
    QString     memberName; /// Member Name
    int         memberID;   /// Member ID
    MemberType  membership; /// Membership Type
    QDate       expirationDate; /// Member Expiration Date
    float       rebate;         /// Member Rebate
    float       totalSpent;     /// Member Total Spent
    int         memberRenewal;  /// Member Renewal
};

#endif // MEMBER_H
