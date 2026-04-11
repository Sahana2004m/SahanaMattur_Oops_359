//write a c++ program to pass a object as a function argument where object represents time add two object make it a non inline function
#include<iostream>
using namespace std;
class Time
{
 private:
 int hour,minute,second;
 public:
  void getTime()
  {
   cout<<"enter hours ,min,sec:"}
   cin >> hour >>mininute>>second;

 }
 void displayTime()
 {
 cout<<hour<<"h"<<min<<"m"<<sec<<"s";

 Time Addtime(Time t);}
 Time Time::addTime(Time t) {
    Time t1;

    t1.seconds = seconds + t.seconds;
    t1.minutes = minutes + t.minutes + t1.seconds / 60;
    t1.seconds = temp.seconds % 60;

    t1.hours = hours + t.hours + t1.minutes / 60;
    t1.minutes = t1.minutes % 60;

    return t1;
}
int main() {
    Time t2, t3, result;

    cout << "Enter first time:\n";
    t2.getTime();

    cout << "Enter second time:\n";
    t3.getTime();

    // Passing object as argument
    result = t2.addTime(t3);

    cout << "Sum of times: ";
    result.displayTime();

    return 0;
}
