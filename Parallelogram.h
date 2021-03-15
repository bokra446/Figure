#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <cassert>
#include "Figure.h"

class Parallelogram : public Figure{
public:
	Parallelogram(double a, double b, double alpha);
  double calculateP() const override;
  double calculateS() const override;
	
protected:
	double _a, _b, _alpha;
};