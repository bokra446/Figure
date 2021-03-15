#include <string>
#include <iostream>
#include <cmath>
#include <cassert>
#include "Circle.h"

Circle::Circle(double a)
	: Ellipse(a, a)
	{
		_name = "Circle";
	}