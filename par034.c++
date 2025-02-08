#include<iostream>
using namespace std;

class employee{
    static int count;// it is already to save the zero and *this also called is static data member of class *
    int id;
   // static void getcount(void){
    //cout<<"this value of count is "<<count<<endl;
//}

    public:
    void setdata(void){
     cout<<"  enter the my id "<<endl;
    cin>>id;
    count++; 
    }
    void getdata(void){

        cout<<"this employee " <<id<< " and this employ number "<<count<<endl;
    }
    //static void getcount(void){
    //cout<<"this value of count is "<<count<<endl;
//}

   // cout<<"this value of count is "<<count<<endl;
//}
static void getcount(void){
cout<<"this value of count is "<<count<<endl;
}
};
int employee :: count=1000;
//int employee :: getcount(void);
static void getcount(void){//this is  static function 
    cout<<"this value of count is "<<count<<endl;
//}


int main(){
    employee harrybhai,rohan ,lovish;
    //harrybhai.id = 1; this is my private member so do donot use in any other place only and only in class function
   // harrybhai.count = 1;
   harrybhai.setdata();
   harrybhai.getdata();

   employee :: getcount();
   
   
   rohan.setdata();
   rohan.getdata();

   employee :: getcount();
   lovish.setdata();
   lovish.getdata();
   employee :: getcount();
   return 0;
}