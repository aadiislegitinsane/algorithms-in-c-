#include<iostream>
using namespace std;


//Inline functions suggest to the compiler to replace function calls-
// -with the actual function code to avoid function call overhead.
inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;
}

int main() {

    int a = 1, b = 2;
    int ans = 0; 

    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;



    return 0;
}