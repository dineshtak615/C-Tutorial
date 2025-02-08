#include<iostream>//parameterized and default in constructor it ok bro
 using namespace std;
 class p0int{
    int x,y;
    public:
    p0int(int a,int b){
        x=a;
        y=b;
    }
    void displayp0int(){
        cout<<"the point is (" <<x<<" , "<<y<<")"<<endl;

    }
 };
 int main(){
    p0int p(1,1);
    p.displayp0int();
    p0int q(7,8);
    q.displayp0int();
    return 0;
 }
