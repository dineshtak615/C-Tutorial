#include<iostream>//dynamic(runtime  change ) initialization od object using constructure 
using namespace std;
class bankdepoist{
    int principal;
    int yrs;
    float interestrate;
    float returnvalue;
    public:
     bankdepoist(){}
     bankdepoist(int p , int y, float r);
    
    bankdepoist(int p , int y, int r);
void show(void);

};
bankdepoist :: bankdepoist(int p ,int y ,float r){
    principal =p;
   yrs=y;
   interestrate =r;
   returnvalue =p;
   for(int i=0;i<y;i++){
    returnvalue = returnvalue*(1+interestrate);

   }
}
bankdepoist :: bankdepoist(int p ,int y ,int r){
    principal =p;
   yrs=y;
   interestrate =float(r)/100;
   returnvalue = principal;
   for(int i=0;i<y;i++){
    returnvalue =returnvalue*(1 + interestrate);

   }
}
void bankdepoist :: show(){
    cout<<endl<<"principal amount was "<<principal
              <<" return value after "<<yrs
              <<" is yrs return amount is  "<<returnvalue<<endl; 
}
int main(){
    bankdepoist bd1, bd2, bd3;
    int p ,y;
    float r;
    int R;
    cout<<"enter the value of p and y and r"<<endl;
    cin>>p>>y>>r;
    bd1=bankdepoist(p,y,r);
    bd1.show();
    cout<<"enter the value of p and y and R"<<endl;
    cin>>p>>y>>R;
    bd2=bankdepoist(p,y,R);
    bd2.show();
    return 0;

}