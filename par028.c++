#include<iostream>
//fibanocii sequence is  example of recursion 
using namespace std;

int fib(int n){
    if(n<2)
   {
return 1;
}
return fib(n-2)+fib(n-1);

   } 
   int main()
   {
int a;
cout<<"enter a number "<<endl;
cin>>a;
cout<<"the value of fibaoncii sequence at position "<<a<< " is "<<fib(a)<<endl;
return 0;
   }
