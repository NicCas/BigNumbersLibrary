//
//  BigNum.cpp
//  BigNumbersLib
//
//  Created by Nicole Casartelli on 5/14/19.
//  Copyright © 2019 Nicole Casartelli. All rights reserved.
//

#include <stdio.h>
#include "BigNum.h"

#include <stdexcept>

using namespace std;

namespace BigNum
{
	double MyBigNum::Add(double a, double b)
	{
		return a + b;
	}
	
	double MyBigNum::Subtract(double a, double b)
	{
		return a - b;
	}
	
	double MyBigNum::Multiply(double a, double b)
	{
		return a * b;
	}
	
	double MyBigNum::Divide(double a, double b)
	{
		return a / b;
	}
}

