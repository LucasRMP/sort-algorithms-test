#pragma once

#include <iostream>
#include <chrono>

using namespace std::chrono;

class TimeCounter {
  private:
  high_resolution_clock::time_point start;
  high_resolution_clock::time_point end;
  float timeElapsed;

  public:
  TimeCounter(bool);
  void begin();
  void end();
  float getSecondsElapsed();

};