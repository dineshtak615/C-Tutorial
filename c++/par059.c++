#include<iostream>
using namespace std;
/*
syntax for initialization list i constructor:
constructor (argument -list): initilization-section
{
    assignment +other code;

}
class test{ 
    int a;
    int b;
    public:
    test(int i, int j ) : a(i),b(j){constructor - body}
    
};


*/
class test{ 
    int b;
    int a;
    public:
    //{test(int i, int j ) : a(i),b(j)
       // test(int i, int j ) : a(i),b(i+j)
      // test(int i, int j ) : a(i),b(2*j)
      
    //test(int i, int j ) : a(i),b(a+j)  
    //test(int i, int j ) : b(a+j) , a(i)
    //test(int i, int j ) : b(j) , a(i+b)-->red flag this will create probems because  a is will be initialized frist
        test(int i, int j ) : b(j) , a(i+b)
        {
        cout<<"constructor execution "<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
        
    }
    
};
int main(){
test t(2,5);
//retrun 0;
    
}