//this pointer
#include<iostream>
using namespace std;

class A{
int a;
public:
A& setData(int a)
//void setData(int a)
{
this->a=a;
return *this;
}
void getData(){
    cout<<"the value of a "<<a<<endl;

}
};
int main(){
    //this is a pointer which is a pointer  which points to the odject which invokes the number functions
    A a;
    a.setData(6).getData();
    //a.getData();
    return 0;

}