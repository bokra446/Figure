#include <string>
#include <iostream>
#include <cmath>
#include <cassert>
#include "Rectangle.h"

Rectangle::Rectangle(double a, double b)
	: Parallelogram(a, b, 90)
	{
		_name = "Parallelogram";
	};