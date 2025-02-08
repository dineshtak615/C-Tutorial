#include<iostream>
#include<map>
#include<string>

using namespace std;
//map is an associative array
int main(){

map<string ,int> mapmarks;
mapmarks["harry"]=98;
mapmarks["jack"]=90;
mapmarks["rohan"]=4;
mapmarks.insert({{"danish",86},{"manish",46}});

map<string,int>::iterator iter;
for(iter=mapmarks.begin();iter!=mapmarks.end();iter++)
{
    cout<<(*iter).first<<" "<<(*iter).second <<" \n";
}
cout<<"the size is :"<<mapmarks.size()<<endl;
cout<<"the max_size is :"<<mapmarks.max_size()<<endl;
cout<<"the empty return value  is :"<<mapmarks.empty()<<endl;

    return 0;
}