#include <iostream>
#include <chrono>
#include <string>

#include "algorithms.hpp"
#include "utilities.hpp"

void showHelp();

int main(int argC, char *argS[]) {
	bool extraInf = false;
	for (int i = 0; i < argC; i++) std::cout << argS[i] << " ";

			 if (argC == 2 && argS[1][0] == 'h') showHelp();
	else if (argC == 4 && argS[3][0] == 'x') extraInf = true;
	else if (argC != 3) error("ERROR - Bad request - type \'h\' for help");

	int size = atoi(argS[1]);
	if (extraInf) std::cout << "Size: " << size << std::endl;

	int *vec;
	if (extraInf) {
		TimeCounter<std::chrono::nanoseconds> timer;
		timer.beginRecord();
		vec = initReverseArray(size);
		timer.stopRecord();

		std::cout << "Array initialized in " << timer.getElapsedTime() << "ns" << std::endl;
	}
	else {
		vec = initReverseArray(size);
	}

	char option = argS[2][0];
	std::string algName;
	std::string result;

	switch (option) {
		case 'b':
			algName = "Bubble";
			result = sort::bubble(vec, size).toString();
		break;

		case 's':
			algName = "Selection";
			result = sort::selection(vec, size).toString();
		break;

		case 'i':
			algName = "Insertion";
			result = sort::insertion(vec, size).toString();
		break;
	
	}

	std::cout << algName << ": " << result << std::endl;

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