#include<iostream>
 //recursion s is in c++
 using namespace std;
int factorial(int n){
    if(n<=1)
    {
        return 1;
    } 

    return n*factorial(n-1);

}

int main()
{//n!=n*(n-1)!
int a;
cout<<"enter a number "<<endl;
cin>>a;
cout<<"the factorial is "<<a<<" is "<<factorial(a)<<endl;


    return 0;
}

 //factorical a number 