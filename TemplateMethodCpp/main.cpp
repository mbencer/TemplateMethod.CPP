
#include <cstdlib>
#include "JakubParty.h"
#include "MichalParty.h"
#include <memory>
#include <iostream>
#include "PawelParty.h"

int main()
{

	auto jakub = std::make_unique<JakubParty>();
	auto michal = std::make_unique<MichalParty>();
	auto pawel = std::make_unique<PawelParty>();

	std::cout << "Jakub: \n";
	jakub->GoToParty();

	std::cout << "\nMichal: \n";
	michal->GoToParty();

	std::cout << "\nPawel: \n";
	pawel->GoToParty();

	system("pause");
	return 0;
}
