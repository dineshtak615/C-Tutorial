/*syntax
class derivedc : visibility-mode base1 , visibility ]- mode base2
{

    class body of class "derivedc"
};
1.multiple inheritance deep 
2.class a and b both joint make thrird class c
<like this> 
A---)
    )---> C
B---)

*/

#include<iostream>
using namespace std;

class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int =a;

    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int =a;

    }
};
class base3{
    protected:
    int base3int;
    public:
    void set_base3int(int a){
        base3int =a;

    }
};

class derived :public base1 , public base2,  public base3{
    public:
    void show(){
    cout<<"the value of base2 is "<<base1int<<endl;
    cout<<"the value of base1 is "<<base2int<<endl;
    cout<<"the value of base3 is  "<<base3int<<endl;
    cout<<"the sum of these value is  "<<base1int + base2int + base3int <<endl;
    }
/*
the inheritance class will look something like this 
data member 
base1int-->protected 
base2int-->protected

member function
set_base1int()-->public
set_base2int()-->public
set_show()--> public

*/
};
int main()
{
    derived harry;
   harry.set_base1int(77);
   harry.set_base2int(9);
   harry.set_base3int(8);
   harry.show();
   return 0;
}

