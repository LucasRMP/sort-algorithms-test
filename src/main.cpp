#include <iostream>
#include <chrono>
#include <string>

#include "algorithms.hpp"
#include "utilities.hpp"

void showHelp();

int main(int argC, char *argS[]) {
	
	if (argC == 2 && argS[1][0] == 'h') showHelp();
	if (argC != 3) error("ERROR - Bad request - type \'h for help\'");

	int size = atoi(argS[1]);
	std::cout << "Size: " << size << std::endl;

	int *vec = initReverseArray(size);

	char option = argS[2][0];

	switch (option) {
		case 'b':
			std::cout << "Bubble: " << sort::bubble(vec, size).toString() << std::endl;
		break;

		case 's':
			std::cout << "Selection: " << sort::selection(vec, size).toString() << std::endl;
		break;

		case 'i':
			std::cout << "Insertion: " << sort::insertion(vec, size).toString() << std::endl;
		break;
	
	}

	delete vec;
	pause();
	return 0;
}

void showHelp() {
	std::cout << "Usage template: <command> <array-size> <algorithm>\n" 
						<< "-> Algorithms:\n"
						<< "-> \'b\' for bubble\n"
						<< "-> \'i\' for insertion\n"
						<< "-> \'s\' for selection\n"
						<< "-> \'m\' for merge\n"
						<< "-> \'q\' for quick\n"
						<< "-> \'r\' for raddix\n";
}



//mingw compilation command: g++ .\src\*.cpp -Wall -Wunused-variable -Wextra -std=c++17 -ggdb -Iinclude -Llib -o .\bin\out