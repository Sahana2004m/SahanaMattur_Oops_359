#include <iostream>
using namespace std;

class Divide {
public:
    void show() {
        int a = 10, b = 0;

        if (b == 0)
            cout << "Cannot divide by 0";
        else
            cout << a / b;
    }
};

int main() {
    Divide obj;
    obj.show();
    return 0;
}
