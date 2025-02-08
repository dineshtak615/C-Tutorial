#include<iostream>
#include<fstream>
using namespace std;
 
 int main(){
    //creating our file with hout stream
    //ofstream hout("sample66.txt");
    //creating a name string and filling it with string entered by the usecout<<"enter your name ";
//string name;
//cin>>name;
    //writing a string to the file 
   //hout<<"my name is " + name;
//hout.close();
 ifstream hin("sample66.txt");
   string content;
 //hin>>content;
 getline(hin, content);
 cout<<"the content 0f this file is "<<content;

 }