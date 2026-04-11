#include <iostream>
using namespace std;

float area(float length = 5.0, float width = 3.0) {
    return length * width;
}

int main() {
    float l, w;
    char choice;

    cout << "Do you want to enter values? (y/n): ";
    cin >> choice;

    if(choice == 'y') {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
        cout << "Area = " << area(l, w);
    } else {
        cout << "Using default values.\n";
        cout << "Area = " << area();
    }

    return 0;
}
