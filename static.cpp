//STATIC DATA MEMBERS
//A Static data member is useful, when all objects of the same class must share a common information.
//*just write static keyword prefix to regular variable;
//*it is initialised to zero when first object of class
//write a c++program to implement a static variable cout and display the results after implementing fr 3 objects

#include<iostream>
using namespace std;
class demo
{
 static int count;
 public:
  void getcount()
  {
   cout<<"count="<<++count;
}
};
int demo::count;
int main()
{
demo d1,d2,d3;
d1.getcount();
d2.getcount();
d3.getcount();
return 0;
}
