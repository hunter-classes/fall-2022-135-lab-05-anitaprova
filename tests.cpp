#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("isDivisibleBy"){ 
	CHECK(isDivisibleBy(100,25) == true);
	CHECK(isDivisibleBy(42,25) == false);
	CHECK(isDivisibleBy(12,0) == false);
	CHECK(isDivisibleBy(0,12) == true);
}	

TEST_CASE("isPrime"){
	CHECK(isPrime(2) == true);
	CHECK(isPrime(3) == true);
	CHECK(isPrime(5) == true);
	CHECK(isPrime(1) == false);
	CHECK(isPrime(10) == false);
}

TEST_CASE("nextPrime"){
	CHECK(nextPrime(0) == 2);
	CHECK(nextPrime(14) == 17);
	CHECK(nextPrime(17) == 19);
}
TEST_CASE("countPrimes"){	
	CHECK(countPrimes(2, 7) == 4);
	CHECK(countPrimes(2, 54) == 16);
	CHECK(countPrimes(20, 21) == 0);
}

TEST_CASE("isTwinPrime"){
	CHECK(isTwinPrime(17) == true);
	CHECK(isTwinPrime(3) == true);
	CHECK(isTwinPrime(15) == false);
	CHECK(isTwinPrime(2) == false);
	CHECK(isTwinPrime(18) == false);
}

TEST_CASE("nextTwinPrime"){
	CHECK(nextTwinPrime(0) == 3);
	CHECK(nextTwinPrime(17) == 19);
	CHECK(nextTwinPrime(20) == 29);
}

TEST_CASE("largestTwinPrime"){
	CHECK(largestTwinPrime(5, 18) == 17);
	CHECK(largestTwinPrime(1, 31) == 31);
	CHECK(largestTwinPrime(14, 16) == -1);
}
