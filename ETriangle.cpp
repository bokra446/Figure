#include <string>
#include <iostream>
#include <cmath>
#include <cassert>
#include "ETriangle.h"

ETriangle::ETriangle (double a)
	: ITriangle (a, a)
    {
      _name = "ETriangle";
    }
