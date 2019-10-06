#pragma once

#include <iostream>
#include <functional>

typedef std::function<bool(int, int)> function_t;

void error(const char*);
void swap(int*, int*);

namespace sort {
	
	long bubble(int*, size_t, function_t);

}