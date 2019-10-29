#pragma once

#include <iostream>
#include <chrono>

template <typename _Tp = std::chrono::milliseconds>
class TimeCounter {
  private:
    std::chrono::_V2::system_clock::time_point startClock;
    std::chrono::_V2::system_clock::time_point stopClock;
    float timeElapsed;
    bool began, stoped;

  public:
    TimeCounter() {
      this->stoped = false;
      this->began  = false;
    }
    
    void beginRecord() {
      this->startClock = std::chrono::high_resolution_clock::now();
      this->began = true;
    }

    void stopRecord() {
      this->stopClock = std::chrono::high_resolution_clock::now();
      this->stoped = true;
    }

    float getElapsedTime() {
      if (this->began && this->stoped) {
        return std::chrono::duration_cast<_Tp>(this->stopClock - this->startClock).count();
      }
      else {
        std::cerr << "ERROR - TimeCounter not started/ended\n";
        return 0.0f;
      }
    }
};