#include "AccountWithTime.h"

//-----------------------------------------------------------

AccountWithTime::AccountWithTime(int price, int time) : Account(price)
{
    this->time = time;
    partCount.resize(time);

}
//-----------------------------------------------------------

void AccountWithTime::comingCount(int &count)
{
   //здесь смысл такой, если окажется что р
    if (isEnabled())
    {
        partCount.push_back(count);
        count = partCount.front();
        if (count)
        {
            setHasCount(true);
        }
        else
        {
            setHasCount(false);
        }
        partCount.pop_front();
    }
}
//-----------------------------------------------------------

void AccountWithTime::spendingCount(int &count)
{
    if (isEnabled())
    {
        count = partCount.front();
        if (!count)
        {
            setHasCount(false);
        }
        partCount.pop_front();
        if (partCount.size() < time)
        {
            partCount.push_back(0);
        }
    }
}
//-----------------------------------------------------------


