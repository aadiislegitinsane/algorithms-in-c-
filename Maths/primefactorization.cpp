vector<pair<int, int>> primeFactorization(int n) {
    vector<pair<int, int>> factors; // (prime, exponent)
    
    // Count factor 2 separately
    int count = 0;
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    if (count > 0) {
        factors.push_back({2, count});
    }
    
    // Check odd divisors from 3 to √n
    for (int i = 3; i * i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count > 0) {
            factors.push_back({i, count});
        }
    }
    
    // If n is still greater than 1, it's a prime factor
    if (n > 1) {
        factors.push_back({n, 1});
    }
    
    return factors;
}

void printPrimeFactors(const vector<pair<int, int>>& factors) {
    cout << "Prime Factorization: ";
    for (auto factor : factors) {
        cout << factor.first;
        if (factor.second > 1) {
            cout << "^" << factor.second;
        }
        cout << " ";
    }
    cout << endl;
}