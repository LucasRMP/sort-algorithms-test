#include "algorithms.hpp"

result_t sort::bubble(int *vec, int size) {
    long numIterations = 0;
    long numComparisons = 0;
    long numSwaps = 0;

    auto start = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < size; i++) {
            for (int j = i+1; j < size; j++, numIterations++) {
                numComparisons++;
                if (vec[i] < vec[j]) {
                    swap(&vec[i], &vec[j]);
                    numSwaps++;
                }
            }
        }
    auto end = std::chrono::high_resolution_clock::now();

    const result_t result("bubble", numComparisons, numSwaps, numIterations, float(std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()) / 1000);
    return result;
}

result_t sort::insertion(int *vec, int size) {
    long numIterations = 0;
    long numComparisons = 0;
    long numSwaps = 0;

    auto start = std::chrono::high_resolution_clock::now();
        int i, j, key;
        for (i = 1; i < size; i++) {
            key = vec[i];
            j = i-1;

            while (j >= 0 && vec[j] > key) {
                vec[j+1] = vec[j];

                numIterations++; j--;
            }

            vec[j+1] = key; 
        }
    auto end = std::chrono::high_resolution_clock::now();

    const result_t result("insertion",numComparisons, numSwaps, numIterations, float(std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()) / 1000);
    return result;
}

result_t sort::selection(int *vec, int size) {
    long numIterations = 0;
    long numComparisons = 0;
    long numSwaps = 0;

    auto start = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < size; i++) {
            int keyIndex = i;
            
            for (int j = i+1; j < size; j++, numIterations++) {
                numComparisons++;
                if (vec[keyIndex] < vec[j]) keyIndex = j;
            }

            numComparisons++;
            if (keyIndex != i) {
                swap(&vec[keyIndex], &vec[i]);
                numSwaps++;
            }
        }
    auto end = std::chrono::high_resolution_clock::now();

    const result_t result("selection", numComparisons, numSwaps, numIterations, float(std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()) / 1000);
    return result;
}