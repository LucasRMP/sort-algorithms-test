#include "Result.hpp"

Result::Result(long c, long s, long i, long t) {
  this->numComparisons = c;
  this->numSwaps = s;
  this->numIterations = i;
  this->timeElapsed = t;
}

const char * Result::toString() {
  
  std::string result =  "{ numComparisons: " + std::to_string(this->numComparisons) + 
                        ", numSwaps: " + std::to_string(this->numSwaps) +
                        ", numIterations: " + std::to_string(this->numIterations) +
                        ", timeElapsed: " + std::to_string(this->timeElapsed) + "ms };";

  return result.c_str();
}