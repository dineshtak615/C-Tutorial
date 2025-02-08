#include<iostream>
using namespace std;

class dukaan {
    
    int itemid[100];
    int itemprice[100];
    int counter;
    public :
    
        

    
    int setprice(void){
        counter = 0;
cout<<"enter id your item no. "<<counter+1<<endl;
cin>>itemid[counter];
cout<<"enter id your price "<<endl;
cin>>itemprice[counter];
counter++;


    }
    int displayprice(void){
    for(int i=0;i<counter;i++){
        cout<<"the price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;;

    }
    }

};




int main(){
    //memory allocation  and using array
    //member function is common for everyone  it allocate the same memory every function
dukaan shop;
//shop.intcounter();
shop.setprice();
//dukaan.setprice();
//dukaan.setprice();
shop.displayprice();


}