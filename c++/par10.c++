#include<iostream>
#include<iomanip>
//manipulators in c++
 using namespace std;
  int main()
  {
int a=45,b=456,c=5769;

cout<<"the value of without setw "<<a<<endl;
cout<<"the value of without setw "<<b<<endl;
cout<<"the value of without setw "<<c<<endl;

cout<<endl;
cout<<"the value of without setw "<<setw(2)<<a<<endl;
cout<<"the value of without setw "<<setw(2)<<b<<endl;
cout<<"the value of without setw "<<setw(2)<<c<<endl;

return 0;


 }