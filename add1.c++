#include<iostream>
using namespace std;
class Add
{
 public:
 int a ,b,sum;
 void getData(){
 cout<<"enter two numbers:";
 cin>>a>>b;
 }
 void calculate()
 {
  sum=a+b;
 }
 void display(){
 cout<<"sum="<<sum;
 }
};
int main()
{
 Add obj;

 obj.getData();
 obj.calculate();
 obj.display();
 return 0;
 }
