#include<iostream>
 //this is selecation structure (if else lader else switch casee)
 using namespace std;
  
  int main()

  { int  age;
  cout<<"tell me your age: "<<endl;
  cin>>age;
  if((age<18) && age>0){
    cout<<"you are not come  to party : "<<endl;
    
  }
  else if(age==18)
  {
    cout<<"you are a kid and you will get a kid pass to the party :"<<endl;

  }  
  else if(age<1){
  cout<<"you are not yet born "<<endl;
  }

  else {
    cout<<"you are come to party : "<<endl;
  }
 return 0;
  }