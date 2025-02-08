#include<iostream>
using namespace std;//constructor with default arguments
class simple{
    int data1;
    int data2;
    int data3;
    public:
    simple(int a, int b=8, int c=68){
        data1 =a;
        data2 =b;
        data3=c;

    }
    void printnumber();

};
void simple :: printnumber(){
    cout<<"this is your simple class  data1 and data2 and data3 = "<<data1 <<" and "<<data2<<" and "<<data3<<endl;
   // cout<<"kiya dekh rha h bhai gf nhi "<<endl;

}
int main(){

    simple x(34,56,78);
    x.printnumber();

    return 0;

}