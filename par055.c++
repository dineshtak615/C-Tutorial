#include<iostream>
using namespace std;
class base1 {
    public:
    void greet(){
        cout<<"how are you"<<endl;
        cout<<" hello world "<<endl;

    }
};
class base2 {
    public:
    void greet(){
        cout<<"kaise ho bhai"<<endl;
    
    }
};
class derived : public base1 ,public base2{
    int a;
    public:
    void greet(){
        base2::greet();//ambiguity
        base1::greet();
    }
};
int main(){
    base1 baseobj1;
    base2 baseobj2;
    baseobj1.greet();
    baseobj2.gree();
    derived d;
    d.greet();
    return 0;
}