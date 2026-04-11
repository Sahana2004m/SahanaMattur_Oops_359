#include<iostream>
using namespace std;

class student
{
 public:
   int id;
   string name;

   void display()
   {
    cout<<"ID:"<<id<<endl;
    cout<<"Name:"<<name<<endl;
    }
    };
int main()
{
    student s1,s2;
    s1.id=202;
    s1.name="siri";

    s1.display();


    s2.id=402;
    s2.name="gaurav";

    s2.display();
    return 0;
}
