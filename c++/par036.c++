//the use of friend function 
//properties of friend function 
//not is scope of class 
//since  it is not in the . .it cannot be called from the object of that class . c1.sumcomplex()==invalid 
//usually contans the object as arguments
//can be declared inside public or private secation of the class 
//it cannot access the member directliy by thier manes and need object_name.member_name to access any member 
#include<iostream>
using namespace std;
class complex{
    int a,b ;
    friend  complex sumcomplex(complex o1 , complex o2);

    public:
    void setnumber(int n1 , int n2){
        a=n1;
        b=n2;}
    void printnumber()
    {
cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex sumcomplex(complex o1 , complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a),(o1.b + o2.b));

    return o3;
}
int main(){
    complex c1 ,c2, sum ;
    c1.setnumber(3,5);
    c1.printnumber();
c2.setnumber(5,7);
c2.printnumber();

sum = sumcomplex(c1,c2);
sum.printnumber();
return 0;

}