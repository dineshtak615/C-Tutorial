#include<iostream>
int c=45;
using namespace std;

int main()
{
    int a, b, c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
cout<<"enter the value of b"<<endl;
    cin>>b;
    c= a + b;
    cout<<"the sum is c"<<c<<endl;
    cout<<"the global variable is :"<<::c<<endl;
return 0;
}