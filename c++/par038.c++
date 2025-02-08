#include<iostream>
using namespace std;
class y;

class x{
int data;
public:
void setvalue(int value ){
    data = value;
}
friend void add(x,y);

};
class y{
int num;
public:
void setvalue(int value ){
    num = value;
}
friend void add(x,y);

};
void add(x u, y v ){
    cout<<"summing data of x and y objects gives me = "<<u.data + v.num;
}
int main(){
    x a1;
    a1.setvalue(3);

    y b1;
    b1.setvalue(5);
    add(a1,b1);
    return 0;

}