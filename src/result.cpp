#include "Result.hpp"

Result::Result(long c, long s, long i, long t) {
  this->numComparisons = c;
  this->numSwaps = s;
  this->numIterations = i;
  this->timeElapsed = t;
}

const char * Result::toString() {
  
  std::string result =  "{\n  numComparisons: " + std::to_string(this->numComparisons) + 
                        ",\n  numSwaps: " + std::to_string(this->numSwaps) +
                        ",\n  numIterations: " + std::to_string(this->numIterations) +
                        ",\n  timeElapsed: " + std::to_string(this->timeElapsed) + "ms\n};";

  return result.c_str();
}