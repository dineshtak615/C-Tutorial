#include<iostream>
 using namespace std;

 struct empolyee
 {
    //data
    int eid;
    char favchar;
    float salary;

 };
 int main()
 {
    struct empolyee mrcode;
    mrcode.eid=21;
    mrcode.favchar='d';
    mrcode.salary=4243769687623.535;
cout<<"the eid of of empolyee "<<mrcode.eid<<endl;
cout<<"the fav char of empolyee"<<mrcode.favchar<<endl;
cout<<"the value of salary of empolyee"<< mrcode.salary<<endl;

    return 0;
 }