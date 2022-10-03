#include <iostream>
#include "funcs.h"

int main()
{
	std::cout << isDivisibleBy(100, 25) << std::endl;
	std::cout << isDivisibleBy(35, 17) << std::endl;	

	std::cout << isPrime(4) << std::endl;
	std::cout << isPrime(5) << std::endl;
	
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
