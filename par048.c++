/*syntax od drived class
class {{drived - class name}} :{{visibility -mode}}{{base -class-name}}{
    class members/method .ete
}
note:
1.default   visibility mode is private;
2.public visibility mode : members of the base class becomes public members of the drived class
3.private visibility mode:public members of the class becomes private members of the drived class
4.private members are never inherited


*/

#include<iostream>
using namespace std;

//base class
class employee{
    public:
    int id;
    float salary;
    employee(){}
    employee(int inpid){
        id =inpid;
        salary =3434.0;

    }
};
//drived class
//creating a programmer class drived from employeebase class
class programmer : public employee{
    public :
    int languagecode;
    programmer(int inpid){
        id =inpid;
        languagecode=9;
    }
    //void getdata(){
    //    cout<<id<<endl;
    //}

};
int main(){
employee harry(1),rohan(2);
cout<<harry.salary<<endl;
cout<<rohan.salary<<endl;
programmer skillf(10);
cout<<skillf.languagecode<<endl;
cout<<skillf.id<<endl;
//skillf.getdata();
return 0;
}