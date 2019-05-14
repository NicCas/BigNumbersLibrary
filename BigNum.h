//
//  BigNum.h
//  BigNumbersLib
//
//  Created by Nicole Casartelli on 5/14/19.
//  Copyright © 2019 Nicole Casartelli. All rights reserved.
//

#ifndef BigNum_h
#define BigNum_h

namespace BigNum
{
	class MyBigNum
	{
	public:
		// Returns a + b
		static double Add(double a, double b);
		
		// Returns a - b
		static double Subtract(double a, double b);
		
		// Returns a * b
		static double Multiply(double a, double b);
		
		// Returns a / b
		static double Divide(double a, double b);

	};
}

#endif /* BigNum_h */
