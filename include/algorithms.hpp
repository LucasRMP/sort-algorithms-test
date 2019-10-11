#pragma once

#include <iostream>
#include <string>
#include <chrono>
#include <functional>

#include "utilities.hpp"
#include "TimeCounter.hpp"
#include "result.hpp"

typedef std::function< bool (int, int) > cmpFunction_t;

namespace sort {
	
	result_t bubble(int*, int);
	result_t insertion(int*, int);
	result_t merge(int*, int);
	result_t quick(int*, int);
	result_t selection(int*, int);

}