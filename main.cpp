#include <iostream>


#include "funcs.h"

int main()
{
	isDivisibleBy(100, 25);
	isDivisibleBy(35, 17);	

	isPrime(4);
	isPrime(5);
	
	std::cout << nextPrime(3) << std::endl;
	std::cout << nextPrime(14) << std::endl;
	std::cout << nextPrime(17) << std::endl;

	std::cout << countPrimes(5, 25) << std::endl;

	return 0;
}
