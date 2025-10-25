#include<iostream>
#include<vector>
using namespace std;

void sieve(bool prime[]) {
    // Set all numbers from 2 to 1000000 as potential primes
    for(int i=2; i<=1000000; i++) {
        prime[i] = 1;  // 1 represents true (prime)
    }

    // Main sieve logic
    for(int i = 2; i<=1000000; i++) {
        if(prime[i]) {  // If i is prime
            // Mark all multiples of i as non-prime
            for(int j = 2*i; j<=1000000; j+=i) {
                prime[j] = 0;  // 0 represents false (not prime)
            }
        }
    }
    prime[0] = prime[1] = 0;  // 0 and 1 are not primes
}