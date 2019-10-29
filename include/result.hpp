#pragma once

#include <string>

class Result {
	private:
		long numComparisons;
		long numSwaps;
		long numIterations;
		long timeElapsed;

	public: 
		Result(long c, long s, long i, long t);

	const char *toString();
};