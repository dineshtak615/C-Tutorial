#include<iostream>

using namespace std;
 
 // switch  case in selecation statement
  int main()
  {
    int age ;
     
     cout<<"tell me your age"<<endl;
     cin>>age;

     switch(age)
     {
        case 22:
             cout<<"your is age is 22 "<<endl;
             break; 
        case 2:
             cout<<"your is age is 2 "<<endl;  
             break; 
        case 9:
             cout<<"your is age is 9"<<endl;
            break;    
       default:

            cout<<"no special case "<<endl;     
     }
     return 0;
  }