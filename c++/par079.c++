//function objects in c++


#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
 int main(){
    //function objects(functor also called): function warpped in class so that it available like an objbect
    int arr[]={1,2,43,56,78,89,79};
    //sort(arr,arr+7);
    sort(arr,arr+7, greater<int>());
    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;;
    }
    return 0;
 }
//the end of c++ language by danish bhai
//ok meet u new language 