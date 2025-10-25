#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    //left shift --> left shift by 1 is equivalent to multiplication by 2.
    a = a << 1;
    cout<<"a after left shift = "<<a<<endl;

    // right shift --> right shift by 1 is equivalent to integer division by 2.
    b = b >> 1;
    cout<<"b after right shift = "<<b<<endl;
    
    return 0;
}