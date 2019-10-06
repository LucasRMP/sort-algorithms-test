#include <iostream>
#include <string>

#include "algorithms.hpp"

void showHelp();

int main(int argC, char *argS[]) {

	auto cmpFunc = [] (int a, int b) { return (a > b); };

	std::cout << sort::bubble(NULL, 0, cmpFunc) << std::endl;
	
	system("pause");
	return 0;
}

void showHelp() {
	std::cout << std::endl;
}