#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <cassert>
#include "Figure.h"

class Ellipse : public Figure{
protected:
	double _a, _b;

public: 
	Ellipse(double a, double b);
  double calculateP() const override;
  double calculateS() const override;
};