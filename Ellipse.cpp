#include <string>
#include <iostream>
#include <cmath>
#include <cassert>
#include "Figure.h"
#include "Ellipse.h"

#define PI 3.14159265  

//const double PI = std::atan(1.0)*4;

Ellipse::Ellipse(double a, double b){
		_a = a;
		_b = b;
		_name = "Ellipse";
	}

double Ellipse::calculateP() const {
		return 4 * ((PI * _a * _b + (_a - _b)) / (_a + _b));
	}
	
double Ellipse::calculateS() const {
		return PI * _a * _b;
	}