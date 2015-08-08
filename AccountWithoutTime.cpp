#include "AccountWithoutTime.h"

AccountWithoutTime::AccountWithoutTime(void)
{

}

//-----------------------------------------------------------
AccountWithoutTime::AccountWithoutTime(int price) :Account(price)
{
}

void AccountWithoutTime::comingCount(int &count)
{
    if (isEnabled())
    {
        this->count += count;
        setHasCount(true);

    }
}

//-----------------------------------------------------------

void AccountWithoutTime::spendingCount(int &count)
{
    if (isEnabled())
    {
        this->count -= count;
        if (this->count <= 0)
        {
            setHasCount(false);
        }
    }
}
//-----------------------------------------------------------

