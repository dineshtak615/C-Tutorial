//arrray of object using 
#include<iostream>
using namespace std;

class shopitem{
    int id;
    float price;
    public:
    void setdata(int a, float b){
        id =a;
        price=b;

    }
    void getdata(){
        cout<<"code of  of this item is "<<id<<endl;
        cout<<"price of this item is  "<<price<<endl;

    }
};
int main(){
    int size =2;
//int *ptr =new =new int[43];
//int *ptr =new shop[]
    shopitem *ptr = new shopitem[size];
    shopitem *ptrtemp=ptr;
    int p ,i;
    float q;
for(i=0;i<size ;i++){
    cout<<"enter id and price of item "<<i+1<<endl;
    cin>>p>>q;
    ptr->setdata(p,q);
    ptr++;

}
for(i=0;i<size ;i++){
    cout<<"item number :"<<i+1<<endl;
    ptrtemp->getdata();
    ptrtemp++;
}
    
    return 0;

}