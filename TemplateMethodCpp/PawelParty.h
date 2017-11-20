#pragma once
#include "Party.h"

class PawelParty : public Party
{
protected:
	void DrinkInClub() override;
public:
	virtual ~PawelParty() {}
};
