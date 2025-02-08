#include<iostream>
using namespace std;

/*int myfun(int a , int b){
    int c;
    c=(a+b)/2;
    return c;
*/
template <class T>
void swapp(T &a , T &b){
T tem =a;
a= b;
b =tem;
}


template <class T1 ,class T2>
float funavg(T1 a , T2 b){
    float avg =(a+b)/2;
    return avg;

}


int main(){
    //float t;
   // t = myfun(8,9);
//printf("the avg is %.3f ",t);
float a;
 a= funavg(5,2);
 printf("the avg is %.3f",a);
 cout<<endl;
 int x=3,y =6;
 swapp(x,y);
 cout<<x<<endl<<y<<endl;
return 0;
}