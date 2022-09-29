#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("testing all functions"){ 
	CHECK(isDivisibleBy(100,25));
	CHECK(!isDivisibleBy(42,25)); //suppose to be false

	CHECK(!isPrime(1)); //suppose to be false
	CHECK(isPrime(2));
	CHECK(isPrime(3));
	CHECK(isPrime(5));
	CHECK(!isPrime(10)); //suppose to be false

	CHECK(nextPrime(14) == 17);
	CHECK(nextPrime(17) == 19);
	
	CHECK(countPrimes(2, 7) == 4);

	CHECK(isTwinPrime(17));
	CHECK(!isTwinPrime(15)); //should be false
	CHECK(!isTwinPrime(2));

	CHECK(nextTwinPrime(17));

	CHECK(largestTwinPrime(5, 18) == 17);
	CHECK(largestTwinPrime(1, 31) == 31);
	CHECK(largestTwinPrime(14, 16) == -1);
}
