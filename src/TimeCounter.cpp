#include "TimeCounter.hpp"

#include <chrono>
#include <iostream>

using namespace std::chrono;

TimeCounter::TimeCounter(bool start = true) {
  if (start) this->begin();
}

void TimeCounter::begin() {
  this->start = high_resolution_clock::now();
}

void TimeCounter::end() {
  this->end = high_resolution_clock::now();
}

float TimeCounter::getSecondsElapsed() {
  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  return time_span.count();
}

