/*
The word polymorphism means having many forms. In C++, polymorphism concept can be applied to 
functions and operators. A single function name can work differently in different situations.
Similarly, an operator works different when used in different context.

1. Compile-Time Polymorphism
Also known as early binding and static polymorphism, in compile-time polymorphism, the compiler determines 
how the function or operator will work depending on the context. 
This type of polymorphism is achieved by function overloading or operator overloading.

A. Function Overloading

Function overloading is a feature of object-oriented programming where two or more functions can have the
same name but behave differently for different parameters. Such functions are said to be overloaded;
hence, this is known as Function Overloading. Functions can be overloaded either by changing the number 
of arguments or changing the type of arguments.

#include <bits/stdc++.h>
using namespace std;

class Geeks {
public:
    
    // Function to add two integers
    void add(int a, int b) {
        cout << "Integer Sum = " << a + b
        << endl;
    }
    
    // Function to add two floating point values
    void add(double a, double b) {
        cout << "Float Sum = " << a + b
        << endl ;
    }
};

int main() {
    Geeks gfg;
    
    // add() called with int values
    gfg.add(10, 2);

    // add() called with double value
    gfg.add(5.3, 6.2);

    return 0;
}
    OUTPUT: Integer Sum = 12
            Float Sum = 11.5

Explanation: In the above example, two add() functions are defined with the same name but different parameter
types: one for integers and one for floating-point numbers. The correct version of the add() function is 
called at compile time based on the type of arguments passed, allowing the same function name to be used 
for different data types.


B. Operator Overloading

C++ has the ability to provide the operators with a special meaning for particular data type, this ability
is known as operator overloading. For example, we can make use of the addition operator (+) for string 
to concatenate two strings and for integer to add two integers. The << and >> operator are binary shift 
operators but are also used with input and output streams. This is possible due to operator overloading. 

#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    
    Complex(int r, int i) :
    real(r), imag(i) {}

    // Overloading the '+' operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real,
        imag + obj.imag);
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    
    // Adding c1 and c2 using + operator
    Complex c3 = c1 + c2;  
    cout << c3.real << " + i" << c3.imag;
    return 0;
}
    12 + i9

Generally, operators like +, -, etc. does not work for user defined classes as they don't know what to do 
with them. Operator overloading allows us to define the behaviour of such operators for user defined data 
types like we did in this program with Complex class.

2. Runtime Polymorphism
Also known as late binding and dynamic polymorphism, the function call in runtime polymorphism is resolved
at runtime in contrast with compile time polymorphism, where the compiler determines which function call to 
bind at compilation. Runtime polymorphism is implemented using function overriding with virtual functions.

Function Overriding

Function Overriding occurs when a derived class defines one or more member functions of the base class. 
That base function is said to be overridden. The base class function must be declared as virtual function 
for runtime polymorphism to happen.

#include <bits/stdc++.h>
using namespace std;

class Base {
public:

    // Virtual function
    virtual void display() {
        cout << "Base class function";
    }
};

class Derived : public Base {
public:

    // Overriding the base class function
    void display() override {
        cout << "Derived class function";
    }
};

int main() {
    
    // Creating a pointer of type Base
    Base* basePtr;
    
    // Creating an object of Derived class
    Derived derivedObj;

    // Pointing base class pointer to 
    // derived class object
    basePtr = &derivedObj;
    
    // Calling the display function 
    // using base class pointer
    basePtr->display();
    return 0;
}
    OUTPUT: Derived class function

Explanation: In the above example, a virtual function display() is defined in the base class Base, 
and it is overridden in the derived class Derived. The Base class pointer basePtr points to an object 
of the Derived class. When the display() function is called using the basePtr, the derived class version 
of the display() function is called, and prints "Derived class function." This is possible because call 
is resolved at the runtime.

*/