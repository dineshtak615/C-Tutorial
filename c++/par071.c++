//template in c++


#include<iostream>
using namespace std;
template <class t>

class vector{
    public:
    t *arr;
    int size;
    
    vector(int m){
        size =m;
        arr=new t[size];

    }
    t doctp(vector &v){
        t d=0;
        for(int i=0 ; i<=size;i++){
           d= d+this->arr[i]*v.arr[i];

        }
        return d;
    }
};
int main(){
    
    vector <float>v1(3);
    v1.arr[0]=4.9;
    v1.arr[1]=2.8;
    v1.arr[2]=3.8;
    vector <float>v2(3);
    v2.arr[0]=1.0;
    v2.arr[1]=2.8;
    v2.arr[2]=3.2;
    float a=v1.doctp(v2);
    cout<<" rffrrrg  "<<a<<endl;
    return 0;
 
    }
    
