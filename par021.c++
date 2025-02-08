#include<iostream>
using namespace std;

int main()

//pointer to array


{
    int marks[]={12,34,357,78};
int *p = marks;
cout<<"the value of marks[0] "<<*p<<endl;
cout<<"the value of marks[0] "<<(*p+1)<<endl;
cout<<"the value of marks[0] "<<(*p+2)<<endl;
cout<<"the value of marks[0] "<<(*p+3)<<endl;

cout<<*(p++)<<endl;
cout<<*(++p)<<endl;

return 0;
}