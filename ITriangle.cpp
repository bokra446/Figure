#include <string>
#include <iostream>
#include <cmath>
#include <cassert>
#include "ITriangle.h"

ITriangle::ITriangle (double a, double b)
	: Triangle(a, b, a) 
    {
      _name = "ITriangle";
    }