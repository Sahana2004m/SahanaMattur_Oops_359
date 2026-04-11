#include<iostream>
using namespace std;

class car
{
 public:
   int price;
   int speed;
   float fuel_quality;

   void display()
   {
    cout<<"Price:"<<price<<endl;
    cout<<"Speed:"<<speed<<endl;
    cout<<"Fuel_quality:"<<fuel_quality<<endl;
    }
    };
int main()
{
    car c1,c2;
    c1.price=1357999;
    c1.speed=134;
    c1.fuel_quality=22;
    c1.display();
    return 0;
}
