#include <iostream>
#include "Header.h"
int main()
{
	std::cout << "Enter name of Hero 1\n";
	std::string nameFirst;
	std::cin >> nameFirst;
	std::cout << "Enter name of Hero 2\n";
	std::string nameSecond;
	std::cin >> nameSecond;
	int i=0;
	while (i != 2) {
		std::cout << "Choose variant: 1 - fight, 2 - exit\n";
		std::cin >> i;
		if (i == 1) {
			Hero Student(nameFirst);
			Hero Prep(nameSecond);
			Student.strike(Prep);
			std::cout << "Your parameters: \n";
			Student.chekParam();
			std::cout << "Enemy: \n";
			Prep.chekParam();
		}
		else {
			std::cout << "The end.\n";
			break;
		}
	}
}
