#include<iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void startEngine() {
        cout << "Engine started" << endl;
    }
    
    void stopEngine() {
        cout << "Engine stopped" << endl;
    }
};

// Derived class 1
class Car: public Vehicle {
public:
    void openSunroof() {
        cout << "Sunroof opened" << endl;
    }
};

// Derived class 2  
class Truck: public Vehicle {
public:
    void loadCargo() {
        cout << "Cargo loaded" << endl;
    }
};

int main() {
    Car myCar;
    myCar.startEngine();    // From Vehicle
    myCar.openSunroof();    // From Car
    
    Truck myTruck;
    myTruck.startEngine();  // From Vehicle  
    myTruck.loadCargo();    // From Truck
    
    return 0;
}