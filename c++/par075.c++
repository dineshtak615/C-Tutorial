//member function template & overloading template function in c++
#include<iostream>
 using namespace std;

 template <class t>
 class dani{
    public:
     t a;
    dani(int data){
        a=data;

    }
    void display();

    
 };

 template <class t>
 void dani<t> :: display(){
    cout<<a<<endl;
    }
template <class t>
    void  fun( t a){
        cout<<"this is templated function  "<<a<<endl;

    }
    void func(int a){
        cout<<"this is normal funtion "<<a<<endl;

    }
 int main(){
   // dani <int> h(4);
    //cout<<h.a<<endl;
   // h.display();
   func(4);//exact match takes  higher priority(func normal )
   func(5);//template class 

    return 0;
 }
