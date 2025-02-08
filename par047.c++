/*destructor in c++
a destructor is a type of functoin which is called when the object is destroyed . destructor never takes an argument nor does it return any value 




*/




#include<iostream>
using namespace std;
int count=0;
//destructor never takes an argument nor does it return any value 
class num{
    public:
    num(){
        count++;
        cout<<"this is the time when constructor is called "<<count<<endl;
    }
    ~num(){
        cout<<"this is the time when  destructor is called for object number "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"we are inside the our main our main funcy]tion "<<endl;
    cout<<"creatiing the frist object "<<endl;
    num n1;
    {
        cout<<"entering this block "<<endl;
        cout<<"to ccreating  the object n2 and n3 "<<endl;
        num n2, n3;
        cout<<"exiting the block "<<endl;
    }
    cout<<"we are going to back "<<endl;
    return 0;
}