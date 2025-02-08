#include<iostream>
using namespace std;
 class complex{
    int real;
    int imaginary;
    public:
    void setdata(int a, int b){
        real=a;
        imaginary =b;
    }
    void getdata(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;

    }
 };
 int main(){
    //complex c1;
   //complex *ptr = &c1; 
    //complex *ptr =new complex;same to upper case
    //ptr->setdata(2,3);
//(*ptr.)= ptr-> arrow opreator
    //ptr->getdata();
    //complex c1;
   //complex *ptr = &c1; 
    //complex *ptr =new complex;//same to upper case
   // ptr->setdata(5,3);
//(*ptr.)= ptr-> arrow opreator
    //ptr->getdata();

    //array of object
    complex *ptr1 =new complex[8
    ];

    ptr1->setdata(18,9);
    ptr1->getdata();
 }