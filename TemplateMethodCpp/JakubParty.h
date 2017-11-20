#pragma once
#include "Party.h"

class JakubParty : public Party
{

protected:
	void DrinkInClub() override;
public:
	virtual ~JakubParty() {};
};
