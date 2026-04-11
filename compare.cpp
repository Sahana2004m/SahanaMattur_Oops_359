#include<iostream>
#include<string>
using namespace std;
int main()
{
 string str1="apple";
 string str2="ball";
 int results=str1.compare(str2);
 if (results==0)
  {
   cout<<"strings are equal"<<endl;
   }
 else if(results<0)
  {
   cout<<str1<<"comes before"<<str2<<"lex"<<endl;
   }
  else
  {
  cout<<str1<<"comes after"<<str2<<"lex"<<endl;}
   }
