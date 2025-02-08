#include<iostream>
//......array of object  
using namespace std;

class employee{
    int id;
    int salary;
    public:
    void setid(void){
        salary =122;

        cout<<"enter the id of employee "<<endl;
        cin>>id;

    } 
    void getdata(void){
        cout<<"the id of this employee is "<<id<<endl;
    }

}; 
int main()
{
    employee fb[4];
    for(int i=0;i<4;i++)
    {
        fb[i].setid();
        fb[i].getdata();
        return 0;
    }
}