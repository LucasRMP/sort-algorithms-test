#include "algorithms.hpp"


void error(const char *message, int errorCode) {
    std::cerr << message << std::endl;
    exit(errorCode);
}

void swap(int *a, int *b) {
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

long sort::bubble(int *vec, size_t size, function_t cmpFunc) {
    long numIterations = 0;
    for (size_t i = 0; i < size; i++) {
        for (size_t j = i+1; j < size; j++, numIterations++) {
            if (cmpFunc(vec[i], vec[j])) swap(&vec[i], &vec[j]);
        }
    }
    return numIterations;
}