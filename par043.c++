#include<iostream>//overloding of constructor in class 
using namespace std;

class complex{
    int a,b;
    public :

    complex(int x,int y){
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    complex(){
        a=0;
        b=0;

    }
    void printnumber(){
    cout<<"your number is = "<<a<<" + "<<b<<" i "<<endl;

    cout<<" it is cool line of harry bhai to kaise ho aap log to chalu karate bina bakchodi se  "<<endl;

    }
};
int main(){
    complex v(412344,7899);
    v.printnumber();

    complex u(678);
    u.printnumber();
    
    complex  w;
    w.printnumber();
    return 0;
}