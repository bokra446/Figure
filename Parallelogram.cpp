#include <string>
#include <iostream>
#include <cmath>
#include <cassert>
#include "Parallelogram.h"
#include "Figure.h"

#define PI 3.14159265  

Parallelogram::Parallelogram(double a, double b, double alpha){
		_name = "Parallelogram";
		_a = a;
		_b = b;
		_alpha = alpha;
	}
double Parallelogram::calculateP() const {
		return 2*(_a + _b);
	}

double Parallelogram::calculateS() const {
		return _a*_b*sin(_alpha * PI / 180);
	}