#pragma once

#include <iostream>
#include <functional>

typedef std::function< bool (int, int) > cmpFunction_t;

void error(const char*, int );
void swap(int*, int*);

namespace sort {
	
	long bubble(int*, size_t, cmpFunction_t);
	long insertion(int*, size_t, cmpFunction_t);
	long merge(int*, size_t, cmpFunction_t);
	long quick(int*, size_t, cmpFunction_t);
	long selection(int*, size_t, cmpFunction_t);

}