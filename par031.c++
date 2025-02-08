#include<iostream>
#include<string.h>
using namespace std;
class binary
  {
    
string s;

public:
void read(void);
void chk_bin(void);
void once(void);
void display(void);

  };
void binary ::read(void){
    cout<<"enter a binary num "<<endl;
    cin>>s;

}
void binary :: chk_bin(void){
    for(int i; i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binary formart "<<endl;
            exit(1);
        }
        
        
    

    }
}
void binary ::once(void){
    chk_bin();
for(int i; i<s.length();i++){
    if(s.at(i)=='0'){
        s.at(i)='1';
    }
    else{
        s.at(i)='0';
    }
}
}
//void binary ::display(void){
   // cout<<"display your binary no "<<endl;
    //for(int i; i<s.length();i++){
       // cout<<s.at(i);
    //}
   // cout<<endl;
//}
int main(){
    //oops -classes and objects
    //class-->extention of structure(in c)
    //structture had limitions
    // -member and public 
    //  -no methods
    //classes --> strcture 6 more
    //classes -->can have mathod and properties
    //classes _--> can make few member as private and public
    //structure in c++ are typedefed
    //you can declare objects along with the class declaretion like this
    //class employee{
        //class definition 
  //  }harry,rohan lovish;
  //harry.salary = 7 make no sense  if salary is private 

  //nesting of member functions0112
  
binary b;
 b.read();
//b.chk_bin();
b.once();
//b.display();


}