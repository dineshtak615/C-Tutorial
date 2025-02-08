
//multipal paramiter
#include<iostream>
using namespace std;

template <class T1 ,class T2>
class mytem{
    public:
    T1 data1;
    T2 data2;
    mytem(T1 a , T2 b){
data1=a;
data2=b;

    }
   T2  display()
{
    cout<<this->data1<<endl<<this->data2<<endl;
}   
};
int main(){
    mytem <char, int>obj('w',3);
obj.display();
return 0;
}

