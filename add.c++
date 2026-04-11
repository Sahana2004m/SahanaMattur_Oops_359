#include<iostream>
using namespace std;
class Add
{
 public:
 int a ,b,sum;

 void calculate()
 {
  sum=a+b;
 }
};
int main()
{
 Add obj;
 cout<<"enter two num";
 cin>>obj.a>>obj.b;
 obj.calculate();
 cout<<"sum="<<obj.sum;
 return 0;
 }
