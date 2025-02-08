#include<iostream>
 using namespace std;
  //union like is one other wise memory going to overflow understand bro . .
  union money{
    int rice;
    float pounds;
    char car;

  };
  int main()
  {
    union money m1;
    m1.rice=56;
    m1.car = 'thar';
    cout<<"the value of the rice "<<m1.rice<<endl;
    //cout<<"the favrate automobile is :"<<m1.car<<endl; 
    return 0;
  }