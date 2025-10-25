double squareRootNewton(int n, int precision = 10) {
    if (n < 0) return -1;
    
    double x = n;  // Initial guess
    double root;
    
    while (true) {
        root = 0.5 * (x + (n / x));  // Newton's formula
        
        if (abs(root - x) < 0.0001) {
            break;
        }
        x = root;
    }
    
    return root;
}