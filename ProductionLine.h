#ifndef PRODUCTIONLINEH
#define PRODUCTIONLINEH
#include "AccountWithTime.h"

enum Type {typeA, typeB};

class ProductionLine : public AccountWithTime
{
public:
    ProductionLine(Type type, int price, int time);
private:
};

#endif
