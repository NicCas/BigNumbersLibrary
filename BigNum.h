//
//  BigNum.h
//  BigNumbersLib
//
//  Created by Nicole Casartelli on 5/14/19.
//  Copyright © 2019 Nicole Casartelli. All rights reserved.
//

#ifndef BigNum_h
#define BigNum_h
#include <vector>

namespace BigNum
{
	class MyBigNum
	{
		// Parce the string into an int vector
		std::vector <int> parsedNum(std::string numString);
		
	public:
		
		// Returns a + b
		static double Add(std::string a, std::string b);
		
		// Returns a - b
		static double Subtract(std::string a, std::string b);
		
		// Returns a * b
		static double Multiply(std::string a, std::string b);
		
		// Returns a / b
		static double Divide(std::string a, std::string b);
		
		// returns a % b
		std::string Modulo(std::string a, std::string b);

	};
}

#endif /* BigNum_h */
