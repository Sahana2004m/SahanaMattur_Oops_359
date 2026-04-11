#include<iostream>
using namespace std;
int main()
{
 int m=10;
 {
 int k=m;
 int m=3;
 cout<<"inner block";

  {
      int a=1;
      m=8;
   if (a=2)
    {
     m=4;
     cout<<m;}}}}
