#include "../include/algorithms.hpp"

Result sort::bubble(int *vec, int size) {
	long numIterations = 0;
	long numComparisons = 0;
	long numSwaps = 0;
	TimeCounter timer;

	timer.beginRecord();
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++, numIterations++) {
			numComparisons++;
			if (vec[i] < vec[j]) {
				swap(&vec[i], &vec[j]);
				numSwaps++;
			}
		}
	}
	timer.stopRecord();

	Result result(numComparisons, numSwaps, numIterations, timer.getElapsedTime());
	return result;
}

Result sort::insertion(int *vec, int size) { //! WRONG ALGORITHM
	long numIterations = 0;
	long numComparisons = 0;
	long numSwaps = 0;
	TimeCounter timer;

	timer.beginRecord();
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
	timer.stopRecord();

	const Result result(numComparisons, numSwaps, numIterations, timer.getElapsedTime());
	return result;
}

Result sort::selection(int *vec, int size) {
	long numIterations = 0;
	long numComparisons = 0;
	long numSwaps = 0;
	TimeCounter timer;

	timer.beginRecord();
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
	timer.stopRecord();

	const Result result(numComparisons, numSwaps, numIterations, timer.getElapsedTime());
	return result;
}