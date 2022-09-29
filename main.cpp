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
		
	std::cout << isTwinPrime(15) << std::endl;
	std::cout << isTwinPrime(5) << std::endl;

	std::cout << nextTwinPrime(17) << std::endl;

	std::cout << largestTwinPrime(5, 18) << std::endl;
	std::cout << largestTwinPrime(14, 16) << std::endl;	

	return 0;
}
