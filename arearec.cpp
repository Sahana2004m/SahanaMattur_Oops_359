#include<iostream>
using namespace std;

class Rectangle
{
 public:
   int len;
   int wid;
   float area;

   void display()
   {
    cout<<"LEN:"<<len<<endl;
    cout<<"WID:"<<wid<<endl;
    cout<<"AREA:"<<area<<endl;
    }
    };
int main()
{
    Rectangle r1;
    r1.len=20;
    r1.wid=40;
    r1.area=r1.len*r1.wid;

    r1.display();


    return 0;
}
