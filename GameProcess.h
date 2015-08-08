#ifndef GAMEPROCESS_H
#define GAMEPROCESS_H

#include "Account.h"

class GameProcess
{
public:
	GameProcess(void);
	void process();
	void doubleEntryForPay(Account&, Account&);

};

#endif


