#include<iostream>
using namespace std;
class c2;

class c1{
    
int vala;

friend void exchange(c1 & a,c2 &b);

public:
int setdata(int x){
  vala = x;

}
void display(void ){
    cout<<vala<<endl;
}
};
class c2{
    
int valb;
 friend void exchange(c1 & a,c2 &b);
public:
int setdata(int y){
    valb = y;

}
void display(void ){
    cout<<valb<<endl;
};

void exchange(c1 & a,c2 &b){
int tem; 
tem=a.vala;
a.vala = b.valb;
b.valb = tem;
}
int main()
{
    c1 v;
    v.setdata(45);
    c2 u;
    u.setdata(67);
    exchange(v,u);
    cout<<"the value is after swaging "<<endl;
    v.display();
cout<<"the value is after swaging "<<endl;
u.display();
}
