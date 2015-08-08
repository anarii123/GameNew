#ifndef ACCOUNTWITHOUTTIME_H
#define ACCOUNTWITHOUTTIME_H
#include "Account.h"

class AccountWithoutTime : public Account
{
public:
    AccountWithoutTime(void);
    AccountWithoutTime(int);
    void comingCount(int &) override;
    void spendingCount(int&) override;

private:
    int count;

};

#endif // ACCOUNTWITHOUTTIME_H
