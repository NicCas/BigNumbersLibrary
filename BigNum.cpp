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
#include <vector>
#include <iostream>

namespace BigNum
{
	// This should be private
	// Split a string of numbers into a vector
	std::vector <int> parsedNum(std::string numString)
	{
		// Declare char vector and set each index to the equivelent index of numString
		std::vector<char> stringVector(numString.begin(), numString.end());
		
		// Declare int vector
		std::vector<int> largeNumber;
		
		// convert char from char-vector to int and assign to int-vector
		int x;
		for (int i = 0; i < numString.length(); i ++)
		{
			x = (int)stringVector.at(i) - 48;
			std::cout<<x<< std::endl;
			largeNumber.emplace_back(x);
		}
		
		// empty the string vector
		stringVector.clear();
		
		return largeNumber;
	}
	
	
	std::string MyBigNum::Add(std::string a, std::string b)
	{
		std::vector<int> A;
		std::vector<int> B;
		
		if (a.length() < b.length())
		{
			A = parsedNum(b);
			B = parsedNum(a);
		} else {
			A = parsedNum(a);
			B = parsedNum(b);
		}
		// Set strings to vectors
		
		
		int i, m, n;
		if (A.size() == B.size()) // if B has more digits than A
		{
			
			for (i = (int)A.size() - 1; i > -1; i--)
			{
				std::cout<<A.at(i)<< " -> ";
				A.at(i) = A.at(i) + B.at(i);
				std::cout<<A.at(i)<<std::endl;
				if (A.at(i) > 9)
				{
					m = A.at(i);
					n = m - 10;
					
					A.at(i) = m;
					A.at(i-1) += n;
					
				}
			}
			
			if (A.at(0) > 9)
			{
				A.at(0) = 0;
				A.insert(B.begin(), 1);
			}
			
		} else { // If A has more digits than B
			
			for (i = (int)A.size() - 1; i > -1; i--)
			{
				A.at(i) = A.at(i) + B.at(i);
				if (A.at(i) > 9)
				{
					m = A.at(i);
					n = m - 10;
					
					A.at(i) = m;
					A.at(i-1) += n;
					
				}
			}
			int j = (int)A.size() - (int)A.size() - 1;
			while ((A.at(j) > 9) && (j >= 0))
			{
				m = A.at(j);
				n = m - 10;
				
				A.at(j) = m;
				
				j--;
				
				A.at(j) += n;
			}
			
			if (A.at(0) > 9)
			{
				A.at(0) = 0;
				A.insert(A.begin(), 1);
			}
		}
		
		B.clear();
		
		std::ostringstream newBigNumber;
		
		if (!A.empty())
		{
			// Convert all but the last element to avoid a trailing ","
			std::copy(A.begin(), A.end()-1, std::ostream_iterator<int>(newBigNumber));
			
			// Now add the last element with no delimiter
			newBigNumber << A.back();
		}
		
		return newBigNumber;
	}
	
	std::string MyBigNum::Subtract(std::string a, std::string b)
	{
		
		return a - b;
	}
	
	std::string MyBigNum::Multiply(std::string a, std::string b)
	{
		return a * b;
	}
	
	std::string MyBigNum::Divide(std::string a, std::string b)
	{
		return a / b;
	}
	
	std::string MyBigNum::Modulo(std::string a, std::string b)
	{
		
	}
}

