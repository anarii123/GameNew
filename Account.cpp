#include "Account.h"
Account::Account(void)
{

}

//-----------------------------------------------------------

Account::Account(int price)
{
    //Конструктор для счетов, ценность имеющие:
    this->price = price;
}
//-----------------------------------------------------------

void Account::payAccount(int pay)
{
    //оплата счета для открытия доступности счета
    price -= pay;
}
//-----------------------------------------------------------

void Account::setPrice(int price)
{
    this->price = price;
}
//-----------------------------------------------------------

int Account::getPrice()
{
    //возврат стоимости счета
    return price;
}
//-----------------------------------------------------------

bool Account::getHasCount() const
{
    return hasCount;
}

//-----------------------------------------------------------

void Account::setHasCount(bool value)
{
    hasCount = value;
}

//-----------------------------------------------------------

bool Account::isEnabled()
{
    bool result = false;
    if (price <= 0)
        result = true;
    return result;
}
//-----------------------------------------------------------


