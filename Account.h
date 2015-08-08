#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <queue>
using namespace std;

class Account
{
public:
    Account(void);
    Account(int);
    virtual void comingCount(int&) = 0;
    virtual void spendingCount(int&) = 0;
    void setPrice(int);
    void payAccount(int);
    bool isEnabled();
	int getPrice(void);
    bool getHasCount() const;
    void setHasCount(bool value);

private:
    int price;
    bool  hasCount;
};

#endif
