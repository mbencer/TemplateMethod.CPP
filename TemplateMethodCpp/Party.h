#pragma once

class IParty
{
public:
	virtual void GoToParty() = 0;
	virtual ~IParty() = default;
};

class Party : public IParty
{
private:
	void GoToBeforeParty() const;
	void GoToAfterParty() const;
protected:
	virtual void DrinkInClub() = 0; 
public:
	void GoToParty() override sealed;
};
