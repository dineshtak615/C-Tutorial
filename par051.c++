//protected access modifier in c+++

#include<iostream>
using namespace std;
class base{
    protected://this member can be inherited
    int a;
    private:
    int b;
};
/*for a protecte member: 
                     public derivation       private derivation   protected derivation     
1. private          not inherited            not inherited         not inherited
2.protected         protected                private               protected 
3.public            public                    private              protected43


*/
class derived :  protected base {

};
int main(){
    base b;
    derived d;
    //cout<<d.a;//will not work since a is protected in both base as well as drived class 
    return 0;
}