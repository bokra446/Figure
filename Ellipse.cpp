#define _USE_MATH_DEFINES

#include <string>
#include <iostream>
#include <cmath>
#include <cassert>
#include "Figure.h"
#include "Ellipse.h"  

Ellipse::Ellipse(double a, double b){
		_a = a;
		_b = b;
		_name = "Ellipse";
	}

double Ellipse::calculateP() const {
		return 4 * ((M_PI * _a * _b + (_a - _b)) / (_a + _b));
	}
	
double Ellipse::calculateS() const {
		return M_PI * _a * _b;
	}