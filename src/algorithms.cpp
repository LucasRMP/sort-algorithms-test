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

long sort::bubble(int *vec, size_t size, cmpFunction_t cmpFunc) {
    long numIterations = 0;
    for (size_t i = 0; i < size; i++) {
        for (size_t j = i+1; j < size; j++, numIterations++) {
            if (cmpFunc(vec[i], vec[j])) swap(&vec[i], &vec[j]);
        }
    }
    return numIterations;
}

long sort::insertion(int *vec, size_t size, cmpFunction_t cmpFunc) {
    long numIterations = 0;
    for (size_t i = 1; i < size; i++) {
        int choosen = vec[i];
        int j;

        for (j = i-1; (j >= 0 && cmpFunc(vec[j], choosen)); j--, numIterations++) {
            vec[j+1] = vec[j];
        }
        vec[j-1] = choosen;
    }

    for (size_t i = 0; i < size; i++) std::cout << vec[i] << std::endl;

    return numIterations;
}