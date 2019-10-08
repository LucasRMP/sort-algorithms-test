#include <iostream>
#include <string>

#include "algorithms.hpp"

void showHelp();

int main(int argC, char *argS[]) {

	if (argS[1][1] == 'h') showHelp();
	if (argC != 3) error("ERROR - Bad request - type \'-h for help\'", 400);


	cmpFunction_t cmpFunc = [] (int a, int b) { return (a > b); };

	std::cout << sort::bubble(NULL, 0, cmpFunc) << std::endl;
	
	system("pause");
	return 0;
}

void showHelp() {
	std::cout << "Usage template: <command> <array-size> <algorithm>\n" 
						<< "-> Algorithms: \n"
						<< "-> \'b\' for bubble\n"
						<< "-> \'i\' for insertion\n"
						<< "-> \'s\' for selection\n"
						<< "-> \'m\' for merge\n"
						<< "-> \'q\' for quick\n"
						<< "-> \'r\' for raddix\n";
}

//mingw compilation command: g++ .\src\*.cpp -Wall -Wextra -std=c++17 -ggdb -Iinclude -Llib -o .\bin\out