#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // Default Constructor
    Student() {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Student(const Student &s) {
        id = s.id;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    // Display function
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    // Using Default Constructor
    Student s1;
    s1.display();

    // Using Parameterized Constructor
    Student s2(101, "Alice");
    s2.display();

    // Using Copy Constructor
    Student s3 = s2;
    s3.display();

    return 0;
}
