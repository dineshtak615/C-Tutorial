#include<iostream>
//this is poiy
using namespace std;

int sum(int a ,int b){
    cout<<"sum function is with two arugument"<<endl;
    return a+b;
}
int sum(int a ,int b,int c){
    cout<<"sum function is with three arugument"<<endl;
    return a+b+c;
}//the volume cylinder
int volume( double r,int h ){
return (3.14*r*r*h);
}//the valume of cube
int volume(int a)
{
    return(a*a*a);
}//the volume of rectangle box
int volume(int l, int b,int h){
    return (l*b*h);
}
int main(){
    cout<<"the sum os 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum os 3 and 6, 8 is "<<sum(3,6,8)<<endl;
    cout<<"the vlume of cylinder redius 4 and hight is 6  "<<volume(4,6)<<endl;
     cout<<"the vlume of cube redius 4   "<<volume(4)<<endl;
     cout<<"the vlume of l 5 , b 7 h 5 "<<volume(5,7,5)<<endl;
    

    return 0; 
} 