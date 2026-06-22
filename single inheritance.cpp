#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "I am a person" << endl;
    }
};

class Student : public Person {
public:
    void study() {
        cout << "I am studying" << endl;
    }
};

int main() {
    Student s;

    s.display();
    s.study();

    return 0;
}
