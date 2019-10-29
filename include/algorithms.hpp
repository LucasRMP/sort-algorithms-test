#pragma once

#include <iostream>
#include <string>

#include "utilities.hpp"
#include "TimeCounter.hpp"
#include "result.hpp"

namespace sort {
	
	result_t bubble(int*, int);
	result_t insertion(int*, int);
	result_t merge(int*, int);
	result_t quick(int*, int);
	result_t selection(int*, int);

}