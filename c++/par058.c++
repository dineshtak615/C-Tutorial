#include<iostream>
using namespace std;
/* constructor in derived class

case 1:
class b: public a{
    //order of execution  of constructor ->frist a() then b()
};

case 2
class a : public b ,public c{->
    //order of execution of constuctor->b then c() and a()
};
case 3
class a :pulbic b ,virtual public c{
//order of execution constructor -> c() then b() ->a(c)
};

*/
class base1{
    int data1;
    public:
    base1(int i){
        data1 =i;
        cout<<"base1 class constructor called "<<endl;
    }
     void printdatabase1(void){
        cout<<"the value of data1 is "<<data1<<endl;
     }
};
class base2{
    int data2;
    public:
    base2(int i){
        data2 =i;
        cout<<"base2 class constructor called "<<endl;
    }
     void printdatabase2(void){
        cout<<"the value of data2 is "<<data2<<endl;
     }
};
class derived : public  base1 ,public base2 //base1  and base2 will enterchange give change value base1-->base2 and base2-->base1
{
    int derived1 ,derived2;
    public :
    derived(int a , int b ,int c, int d ): base1(a),base2(b) {//base1 and base2 will be enterchange no effects in constructor give me same result
        derived1=c;
        derived2 =d;
        cout<<"derived class constructor called "<<endl;

    }
    void printdataderived(void){
        cout<<"the valu of derived1 is "<<derived1<<endl;
         cout<<"the valu of derived2 is "<<derived2<<endl;
     }
};

int main()
{
derived harry(1,2,3,4);
harry.printdatabase1();
harry.printdatabase1();
harry.printdataderived();
return 0;

}

