//template with default
#include<iostream>
using namespace std;

template < class t1 =float ,class t2= int ,class t3= char>
class wx{
    public:
    t1 a;
    t2 b;
    t3 c;
    wx(t1 x,t2 y , t3 z ){
        a=x;
        b=y;
        c=z;

    }
    void dispaly(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;

    }
};
int main(){

wx <> og(1.2,3,'e');
og.dispaly();
cout<<endl;
wx <int , char ,float> oga(1,'e',4.7);
oga.dispaly();

}