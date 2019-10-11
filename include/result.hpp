#pragma once

#include <string>

typedef struct r {
  std::string algName;
	long numComparisons;
	long numSwaps;
	long numIterations;
	float timeElapsed;

	r(const char *n, long c, long s, long i, float t);

	const char *toString();
} result_t;