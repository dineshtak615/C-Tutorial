#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    
    ofstream out;
    out.open("sample70.txt");
   
    out<<"this my bussinus";
    out<<"this my bussinus";
    out<<"this my bussinus";
    out<<"this my busnus";
    
    out.close();
string s1,s2;
ifstream in;
in.open("sample70.txt");
//in>>s1>>s2;
//cout<<s1<<s2;
while(in.eof()==0)
{
    getline(in,s1);
    
    cout<<s1<<endl;
}
in.close();
return 0;
}
