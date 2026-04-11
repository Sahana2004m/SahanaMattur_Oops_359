#include <iostream>
using namespace std;

class Base
{
private:
    int x;

public:
    void setData(int a);
    int getData();
};

class Derived : public Base
{
public:
    void display();
};

// Base class function definitions
void Base::setData(int a)
{
    x = a;
}

int Base::getData()
{
    return x;
}

// Derived class function definition
void Derived::display()
{
    cout << "Value of x: " << getData() << endl;
}

int main()
{
    Derived obj;
    obj.setData(20);
    obj.display();

    return 0;
}
