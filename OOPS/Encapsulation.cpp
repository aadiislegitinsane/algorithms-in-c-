/*
Encapsulation is one of the core concepts of Object Oriented Programming (OOP). 
The idea of encapsulation is to bind the data members and methods into a single unit. .

A class can hide the implementation part and discloses only the functionalities required
by other classes. By making class data and methods private, representations or implementations
 can later be changed without impacting the codes that uses this class.
It helps in better maintainability, readability and usability. 
It also helps maintain data integrity by allowing validation and control over the 
values assigned to variables.

Implementation of Encapsulation in C++
-->Declare variables as private: Keep the class data members private so that they cannot be accessed 
 directly from outside the class. This ensures data hiding.
-->Use getters and setters: Provide public functions (getters and setters) to access and modify 
 private variables safely. These methods can also include validation to ensure only valid data is assigned.
-->Apply proper access specifiers: Use private for data members to hide information and public for member
 functions that provide controlled access to the data.


Best Practices for Encapsulation

Make class data private to hide implementation details and reduce coupling.
Use getter and setter functions instead of public fields to control access.
Ensure only valid values are assigned to private variables.
Do not provide setters for data that should not be modified externally (e.g., IDs).
Advantages of Encapsulation:

Data Hiding: Encapsulation restricts direct access to private class variables, protecting sensitive 
data from unauthorized access.
Improved Maintainability: You can change the internal implementation of a class without affecting code 
that uses the class.
Enhanced Security: Encapsulation allows validation and control over data in setter methods, preventing
 invalid or harmful values.
Code Reusability: Encapsulated classes can be reused in different programs without exposing internal details.
Better Modularity: Encapsulation keeps data and methods together in a class, promoting organized and modularcode.

Disadvantages of Encapsulation:

Increased Code Complexity: Writing getter and setter functions for each variable can make the code longer and slightly more complex.
Performance Overhead: Accessing private data through functions instead of directly can add a small performance cost.
Less Flexibility in Some Cases: Restricting access too much may limit how other classes can extend or use the class efficiently.

#include <iostream>
#include <string>
using namespace std;

// Class representing a Programmer
class Programmer
{
  private:
    string name; // Private variable

  public:
    // Getter method to access the private data
    string getName()
    {
        return name;
    }

    // Setter method to modify the private data
    void setName(string newName)
    {
        name = newName;
    }
};

int main()
{
    Programmer p;
    p.setName("Geek");                        // Set the name
    cout << "Name=> " << p.getName() << endl; // Get the name
    return 0;
}
*/