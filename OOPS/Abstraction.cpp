/*
Data abstraction is one of the most essential and important features of 
object-oriented programming in C++. Abstraction means displaying only 
essential information about the data and ignoring the internal details or implementation.

Consider a real-life example of a man driving a car. The man only knows that pressing the 
accelerator will increase the speed of the car or applying brakes will stop the car but
he does not know how on pressing the accelerator the speed is actually increasing, he does
not know about the inner mechanism of the car or the implementation of the accelerator, brakes,
 etc in the car. This is what abstraction is.

Types of Abstraction:
Data abstraction - This type only shows the required information about the data and 
ignores unnecessary details.
Control Abstraction - This type only shows the required information about the implementation 
and ignores unnecessary details.

Abstraction using Access Specifiers
Access specifiers are the main pillar of implementing abstraction in C++. We can use access 
specifiers to enforce restrictions on class members. For example:

Members declared as public in a class can be accessed from anywhere in the program.
Members declared as private in a class, can be accessed only from within the class. 
They are not allowed to be accessed from any part of the code outside the class.
We can easily implement abstraction using the above two features provided by access specifiers. 
Say, the members that define the internal implementation can be marked as private in a class.
And the important information needed to be given to the outside world can be marked as public. 
And these public members can access the private members as they are inside the class. 

Example: Abstraction in Header files

One more type of abstraction in C++ can be header files. For example, 
consider the pow() method present in math.h header file. Whenever we need to calculate the power 
of a number, we simply call the function pow() present in the math.h header file and pass the numbers 
as arguments without knowing the underlying algorithm according to which the function is actually 
calculating the power of numbers.
Advantages of Data Abstraction
-->Avoids code duplication and increases reusability.
-->Can change the internal implementation of the class independently without affecting the user.
-->Helps to increase the security and reduces complexity and redundancy of an application or program 
   as only important details are provided to the user.

// C++ Program to Demonstrate the
// working of Abstraction
#include <iostream>
using namespace std;

class implementAbstraction {
private:
    int a, b;

public:
    // method to set values of
    // private members
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}
*/