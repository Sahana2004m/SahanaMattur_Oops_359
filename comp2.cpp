#include<iostream>
#include<string>
using namespace std;
int main()
{
 string str;

 str.assign("Hello,world");
 cout<<str<<endl;

 str.assign("Hello,universe", 4 , 9);
 cout<<str<<endl;

 string other="c++prog";
 str.assign(other, 2 ,5);
 cout<<str<<endl;

 return 0;
 }
