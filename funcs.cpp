#include <iostream>
#include "funcs.h"

// add functions here
bool isDivisibleBy(int n, int d){
	if(n % d == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool isPrime(int n){
	if(n < 2) {
		return false;		
	}

	if(n == 2) {
		return true;
	}

	for (int i = 2; i < n-1; i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

int nextPrime(int n){
	int i = n + 1;
	while(isPrime(i) != true){
		i++;
	}
	return i;
}

int countPrimes(int a, int b){
	int count = 0;
	for (int i = a; i <= b; i++) {
		if(isPrime(i) == true) {
			count++;
		}
	}
	return count;
}

bool isTwinPrime(int n){
	if( isPrime(n) && (isPrime(n-2) == true || isPrime(n+2) == true)) {
		return true;	
	}
	return false;
}

int nextTwinPrime(int n){
	int i = n + 1;
	while(isTwinPrime(i)) {
		i++;
	}
	return i;
}

int largestTwinPrime(int a, int b){
	int max = -1;
	for(int i = a; i <= b; i++) {
		if(isTwinPrime(i) == true) {
			max = i;
		}
	}
	return max;
}
