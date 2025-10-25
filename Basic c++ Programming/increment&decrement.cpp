#include <iostream>
using namespace std;

int main() {
    int i = 10;

    //Pre-increment: First increments i, then uses the new value
    cout << "Pre-Increment i = " << ++i << endl;

    //Post-increment: First uses the current value, then increments i
    cout << "Post-Increment i = " << i++ << endl;

    //Pre-decrement: First decrements i, then uses the new value
    cout << "Pre-Decrement i = " << --i << endl;


    //Post-decrement: First uses the current value, then decrements i
    cout << "Post-Decrement i = " << i-- << endl;
    
    return 0;
}