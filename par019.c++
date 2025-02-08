#include<iostream>
 using namespace std;

 int main(){
    //what is pointer ----> it is a data type which holds the address of other variable or data type
    int a=3;
    int*b;
    b=&a;
    //cout<<*b<<endl;
//cout<<b<<endl;
//cout<<b<<endl;
//cout<<a<<endl;
//cout<<&a<<endl;
//-->pointer to pointer
int **c=&b;
cout<<&b<<endl;
cout<<*c<<endl;
cout<<**c<<endl;
cout<<c<<endl;
return 0; 
 } 