#include<iostream>
using namespace std;

class complex{
    int a, b;
    //creating a constructor 
    //constructor is a special member function with the same name of the class  .it is automatically invpked (call)
    //it is used to initializ of its class
    public:
    complex(int x, int y);//constructor declaration 
void printnumber(){
    cout<<"your number is = "<<a<<"+"<<b<<" i "<<endl;
cout<<"kya londe kya haal chaal "<<endl;
}
};
complex :: complex(int x, int y)//this is paramitric constructor as it acpect 2 arugemnt
{
    a=x;
    b=y;

}
int main(){
complex c1(4,5);

c1.printnumber();
complex c2(4,7);
//complex c2= complex(4,7);
c2.printnumber();
//c3.printnumber();

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