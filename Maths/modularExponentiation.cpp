 // Fast modular exponentiation - O(log b)
long long modExpo(long long a, long long b, long long mod) {
    long long res = 1;
    a = a % mod;
    
    while (b > 0) {
        if (b & 1) {  // If b is odd
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b = b >> 1;   // b = b / 2
    }
    return res;
}