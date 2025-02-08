//program 68 and 69  both are under in c++ include i/o file  name's topic 
#include<iostream>
#include<fstream>
/*
the useful classes for working with files in c++ are
1.fstreambase
2.ifstream-->derived from fstreambase
3.ofstream-->derived from fstreambase

->in order work with in file in c++ you will have to open it .primarlly,there are 2 way to open a file

1.using the constructor 
2.using the member function open of the class



*/
using namespace std;
int main(){
    //string st="harry bhai ";

    //opening files using constructor and writing 

   // ofstream out("samplie68.txt" );//write operation

    //out<<st;
    //opening a file using  constructor and reading  
    string s;
    ifstream in("sample681.txt");//read operation
    in>>s;
//getline(in,s);

   //cin>>st1;
    cout<<"layout the process "<<s;

    return 0;


}
