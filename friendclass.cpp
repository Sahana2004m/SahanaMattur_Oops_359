#include<iostream>
using namespace std;
class Base
{
protected:
 int x;

public:
 Base()
 {
  x=8;
  }
   friend class Derived;
};
class Derived
{
public:
 void display(Base b)
 {
  cout<<"value="<<b.x<<endl;
  }
};
int main()
{
Base b;
Derived d;
d.display(b);
return 0;
}
