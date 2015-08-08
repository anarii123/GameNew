#ifndef ACCOUNTWITHTIME_H
#define ACCOUNTWITHTIME_H
#include "Account.h"

class AccountWithTime : public Account
{
public:
    AccountWithTime(int price, int time);
    void comingCount(int &) override;
    void spendingCount(int &) override;
private:
    deque<int> partCount;
    int time;

};

#endif // ACCOUNTWITHTIME_H
