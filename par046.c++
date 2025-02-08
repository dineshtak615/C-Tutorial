#include<iostream>
using namespace std;
class number {
    int a;
    public :
    number(){
        a=0;

    }

//when no copy constructor is fount ,compiler suplies its own copy constructor 
   // number(number  &obj){
      // cout<<"copy constructor called"<<endl;
       // a=obj.a;
   // }
    number(int num){
        a=num;
    }
    void display(){
        cout<<"the number for this object is "<<a<<endl;

    }


    
};

int main(){
    number x, y, z(45),z2;

x.display();
y.display();
z.display();
number z1(x);//copy construct invoked 
z1.display();
//z1 should exacttly resemble z or x or y
//z2=x;//copy construct not called 
//z2.display();//we cannot say its copy constructor
number z3=z;//copy constructor is called 
z3.display();

    return 0;
}