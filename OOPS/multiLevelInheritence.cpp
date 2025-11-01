class Animal {
public:
    int age;
    int weight;

    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {
public:
    void bark() {
        cout << "Barking" << endl;
    }
};

class GermanShepherd: public Dog {
public:
    void guard() {
        cout << "Guarding territory" << endl;
    }
};

int main() {
    GermanShepherd g;
    
    g.speak();   // From Animal
    g.bark();    // From Dog  
    g.guard();   // From GermanShepherd
    
    return 0;
}