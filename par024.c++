#include<iostream>

 using namespace std;
inline product(int a, int b){
    static int  c=0;//this is executes only once 
    c=c+1;//next time this function is run the value od is c will be retained
    return a*b+c;
}

 int main()
 {
    int a,b;

    cout<<"the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product is a and  b is "<<product(a,b)<<endl;
    cout<<"the product is a and  b is "<<product(a,b)<<endl;
    cout<<"the product is a and  b is "<<product(a,b)<<endl;
    cout<<"the product is a and  b is "<<product(a,b)<<endl;
    cout<<"the product is a and  b is "<<product(a,b)<<endl;
    cout<<"the product is a and  b is "<<product(a,b)<<endl;
    cout<<"the product is a and  b is "<<product(a,b)<<endl;
    cout<<"the product is a and  b is "<<product(a,b)<<endl;
    return 0;

 }
  