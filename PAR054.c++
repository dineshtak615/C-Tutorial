 #include<iostream>
 using namespace std;

 class simple{
    protected:
    int x1, y1;
    public:
    void process(){
        cout<<"the sum is "<<x1+y1<<endl;
        cout<<"the - is "<<x1-y1<<endl;
        cout<<"the * is "<<x1*y1<<endl;
        cout<<"the  / is "<<x1/y1<<endl;
    }
    void set(int a, int b){
        x1=a;
        y1=b;
    }
 };
 class scientific {
    protected :
    int x2 ,y2;
    public:
    void process(){
        cout<<"the square root of x  is " <<(x2+y2)<<endl;
        cout<<"the square ro0t of y is  " <<(y2-x2)<<endl;

        cout<<"the cube root of x is" <<(x2*y2)<<endl;

        cout<<"the cube root of y is" <<(y2/x2)<<endl; 
    }
void set(int a ,int b){
    x2 =a;
    y2 =b;
}
};
class hybrid :public simple ,public scientific{
    public:
    void masterset(int a ,int b){
        simple::set(a,b);
        scientific::set(a,b);
        simple::process();
        scientific::process();

    }
};
int main(){
    int p,q;
    hybrid h;
    cout<<"enter the two value "<<endl;
    cin>>p>>q;
    h.masterset(p,q);
    return 0;
}
 