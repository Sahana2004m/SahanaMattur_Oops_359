
#include<iostream>
using namespace std;
class vehicle{
public:
  int speed;
  void showspeed();

};
class car:public vehicle

{
public:
    string brand;
};
void vehicle::showspeed()
{
    cout << "Speed:" << speed << endl;
}

int main()
{
 car c1;

 c1.brand="BMW";
 c1.speed=111;

 cout<<"Brand:"<<c1.brand<<endl;
 c1.showspeed();
 return 0;
 }
