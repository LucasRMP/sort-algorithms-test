#include "utilities.hpp"

void swap(int *a, int *b) {
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

int *initReverseArray(int size) {
	int *vec = new int[size];
	if (!vec) error("ERROR - Bad alloc - unable to alloc enought memory for the array");

	for (int i = 0; i < size; i++) vec[i] = i;

	std::cout << "Array initialized" << std::endl;

	return vec;
}

void printArray(int *vec, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << vec[i] << ' ';
    }
    std::cout << std::endl;
}

void error(const char *message) {
    std::cerr << message << std::endl;
    exit(-1);
}

void pause() {
    std::cout << "Press enter to continue..." << std::endl;
    std::cin.get();
}