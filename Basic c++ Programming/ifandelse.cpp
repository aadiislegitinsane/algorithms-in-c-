#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    if(n<0) {
        cout<<"n is negative !"<<endl;
    } else if(n>0) {
        cout<<"n is positive !"<<endl;
    } else {
        cout<<"n is zero !"<<endl;
    }

    int a, b;

    cout<<"Enter the value of a : ";
    cin>>a;

    cout<<"Enter the value of b : ";
    cin>>b;

    if(a>b) {
        cout<<"a is greater"<<endl;
    } else {
        cout<<"b is greater"<<endl;
    }

    char ch;

    cout<<"Enter the character : ";
    cin>>ch;

    if(ch>='A' && ch<='Z') {
        cout<<"Uppercase Character !"<<endl;
    } else if(ch>='a' && ch<='z') {
        cout<<"Lowercase Character !"<<endl;
    } else {
        cout<<"Number !"<<endl;
    }
}