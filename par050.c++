//single inheritance a derived class with only one base class  
#include<iostream>
using namespace std;
class base{
int data1;//private by default and  is not inheritable
public:
int data2;
void setdata();
int getdata1();
int getdata2();

};
void base::setdata(){
    data1=10;
    data2 =20;
    cout<<"data1 "<<data1 <<endl;
    cout<<"data2 "<<data2 <<endl;
}

int  base::getdata1(){
    //data1 =3;
    return data1=2;

}
int base :: getdata2() {
    return data2;
}

class drived : private base{
    //class is being derived publically
    int data3;
    public:
    void process();
    void display();
};
void drived :: process(){
setdata();
    data3=data2 * getdata1();

}
void drived :: display(){
    cout<<"value of data 1 is "<<getdata1()<<endl;
    cout<<"value of data 2 is "<<data2<<endl;
    cout<<"value of data 3 is "<<data3<<endl;

}

int main(){
    drived der;
    //der.setdata();
    der.process();
    der.display();
    base dr;
    dr.getdata1();
    return 0;
}












