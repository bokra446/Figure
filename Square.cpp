#include <string>
#include <iostream>
#include <cmath>
#include <cassert>
#include "Square.h"

Square::Square(double a)
	: Rectangle(a, a)
	  {
	  	_name = "Square";
	  }