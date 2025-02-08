//virtual function in c+++


#include<iostream>
using namespace std;

class baseclass{
    public:

    int base_var=1;
   virtual void display(){
        cout<<"displaying  base class variable  base_var "<<base_var<<endl;
        
    }




};


class derivedclass : public baseclass{
    
    public:

   

    int var_derived=2;
    void display(){
        cout<<"displaying base class variable base_var "<<base_var<<endl;

        cout<<"displaying derived class variable var_derived "<<var_derived<<endl;
    } 
};
int main(){
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived;//pointing base class pointer t0 derived class
    //base_class_pointer->base_var=43;
    //base_class_pointer->base_var=4300;
   //base_class_pointer->var_derived;// will give to error
    base_class_pointer->display();

   //derivedclass *derived_class_pointer;
   //derived_class_pointer=&obj_derived;
   //derived_class_pointer->var_derived=98;
  // derived_class_pointer->base_var=65;
   //derived_class_pointer->display();

    return 0;


}
