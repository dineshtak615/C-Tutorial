//revisiting pointer :new and delete in c++
#include<iostream>
using  namespace std;
int main(){
    //basic example
    int a=4;
  int *ptr=&a;
 
  //*ptr=999;
  cout<<"the value of a is "<<*(ptr)<<endl;

  //new opreator 
  //int *p=new int(40);
  float *p=new float(67.0);
  
  //*p=47.0;
  cout<<"the value at address p is "<<*(p)<<endl;

  int *arr=new int[3];
  arr[0] = 10;
 // arr[1] = 20;
 *(arr+1)=20;
  arr[2] = 30;
  //delete poreator
  delete[] arr;
  cout<<"the value of arr[0] is "<<arr[0]<<endl;
  cout<<"the value of arr[1] is "<<arr[1]<<endl;
  cout<<"the value of arr[2] is "<<arr[2]<<endl;
  //delete poreator
return 0;
}
  