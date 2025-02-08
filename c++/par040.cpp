#include<iostream>
using namespace std;

class complex{
    int a, b;
    //creating a constructor 
    //constructor is a special member function with the same name of the class  .it is automatically invpked (call)
    //it is used to initializ of its class
    public:
    complex(void);//constructor declaration 
void printnumber(){
    cout<<"your number is = "<<a<<"+"<<b<<" i "<<endl;
cout<<"kya londe kya haal chaal "<<endl;
}
};
complex :: complex(void)//this is default constructor as it takes no argument
{
    a=45;
    b=90;

}
int main(){
complex c1, c2, c3;

c1.printnumber();
c2.printnumber();
c3.printnumber();

    return 0;

}
/* 
property of constructor 
1 it will be declared in public section of class 
2they are automatically invoked whenever the of  the class
3 the cannot returns value and do not have return type 
4 it can have default aruuments 
5 we cannot refer to thier address








*/