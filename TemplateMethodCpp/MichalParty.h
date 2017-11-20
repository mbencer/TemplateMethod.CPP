#pragma once
#include "Party.h"

class MichalParty : public Party
{
protected:
	void DrinkInClub() override;
public:
	virtual ~MichalParty() {}
};
