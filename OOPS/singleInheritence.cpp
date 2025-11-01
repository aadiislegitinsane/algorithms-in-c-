#include<iostream>
using namespace std;

class Human {

    private:
    int height;

    public: 
    int weight;

    private:
    int age;

    public:
    int getAge() {
        return this->age;
    }

    void setWeight(int w) {
        this->weight = w;

    }

};

class Male: private Human {

    public:
    string color;

    void sleep() {
        cout << "Male Sleeping" << endl;
    }

    int getHeight() {
        return this->height;
    }

};

class Animal {

    public:
    int age;
    int weight;


    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {

};


int main() {

    Male m1;
    //cout << m1.height << endl;



/*
    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;

    cout << object1.color << endl;

    object1.setWeight(84);
    cout << object1.weight << endl;
    object1.sleep();
*/

    Dog d;
    d.speak();
    cout << d.age << endl;


    return 0;
}