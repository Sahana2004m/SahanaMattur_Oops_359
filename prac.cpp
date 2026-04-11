#include<iostream>
using namespace std;

class Rectangle
{
 private:
   int len;
   int wid;
   float area;
public:
   void display()
   {
    cout<<"enter the length and width of rectangle"<<endl;
    cin>>len>>wid;
    area=len*wid;
    cout<<"Area"<<endl;
    }
    };
int main()
{
    Rectangle r1;
    r1.display();
return 0;
}
