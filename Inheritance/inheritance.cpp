#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void introduce() {
        cout << "Hi, I'm " << name << endl;
    }
};

class Student : public Person {
public:
    int rollNumber;

    void study() {
        cout << name << " is studying. Roll number: " << rollNumber << endl;
    }
};

int main() {
    Student s;
    s.name = "Santrupt";
    s.rollNumber = 23;

    s.introduce();  // Inherited from Person
    s.study();      // Own method

    return 0;
}

