#include "result.hpp"

result_t::r(const char *n, long c, long s, long i, float t) {
  this->algName = n;
  this->numComparisons = c;
  this->numSwaps = s;
  this->numIterations = i;
  this->timeElapsed = t;
}

const char * result_t::toString() {
  
  std::string result = this->algName + "{ numComparisons: " + std::to_string(this->numComparisons) + 
                        ", numSwaps: " + std::to_string(this->numSwaps) +
                        ", numIterations: " + std::to_string(this->numIterations) +
                        ", timeElapsed: " + std::to_string(this->timeElapsed) + "s };";

  return result.c_str();
}