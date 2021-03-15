#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <cassert>
#include "Triangle.h"

class ITriangle : public Triangle {
public:
	ITriangle(double a, double b);
};