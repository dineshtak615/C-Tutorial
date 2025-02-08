#include<iostream>
using namespace std;
class b{
    public:
    void say(){
        cout<<"hello world "<<endl;

    }
};
class d : public b{
    int a;
    public:
    void say(){
        cout<<"hello duniya "<<endl;
    }
};
int main(){
    //ambiguity
    b d1;
    d1.say();
    d b3;
    b3.say();
    return 0;

}