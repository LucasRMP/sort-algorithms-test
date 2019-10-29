#pragma once

#include <iostream>
#include <string>

#include "./utilities.hpp"
#include "./TimeCounter.hpp"
#include "./Result.hpp"

namespace sort {
	
	Result bubble(int*, int);
	Result insertion(int*, int);
	Result merge(int*, int);
	Result quick(int*, int);
	Result selection(int*, int);

}