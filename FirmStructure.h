#ifndef FIRMSTRUCTUREH
#define FIRMSTRUCTUREH
#include "Kredit.h"
#include "ProductionLine.h"
#include "Debet.h"
#include "WarehouseMaterials.h"
#include "WarehouseProduction.h"
#include "Money.h"

class FirmStructure
{
public:
	FirmStructure(void);

private:
    WarehouseMaterials warehouseMaterials;
    WarehouseProduction warehouseProduction;
    vector<ProductionLine> productionLine;
    Debet debet;
    Money money;
    Kredit kredit;
	
};

#endif
