#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

// Method 1: Naive approach - O(n)
vector<int> factorsNaive(int n) {
    vector<int> factors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
        }
    }
    return factors;
}

// Method 2: Optimized approach - O(√n)
vector<int> factorsOptimized(int n) {
    vector<int> factors;
    
    // Check divisors from 1 to √n
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);           // Add divisor i
            if (i != n / i) {
                factors.push_back(n / i);   // Add complementary divisor
            }
        }
    }
    
    sort(factors.begin(), factors.end());
    return factors;
}

// Print factors
void printFactors(const vector<int>& factors) {
    cout << "Factors: ";
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;
}