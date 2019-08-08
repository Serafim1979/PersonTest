#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"person.h"

int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");

	one.show();
	std::cout << std::endl << std::endl;
	two.formal_show();
	std::cout << std::endl << std::endl << std::endl;

	three.show();
	std::cout << std::endl << std::endl;
	three.formal_show();
	std::cout << std::endl;

	system("pause");
	return 0;
}