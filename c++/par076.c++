//vector in stl
#include<iostream>
#include<vector>
using namespace std;

template <class t>
//void Display(vector <t> &v)
void Display(vector <t> &v){
    //cout<<" this is nulll vector "<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
//cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main()
{
    vector <int > Vec1;//zero length vector 
    vector <char> Vec2(4);//4_element character vector 
    vector <char> Vec3(Vec2);//4-element character vector from vec2
    vector <int > Vec4(4,5);//6-element vector  of 3s
    Display(Vec4);
    cout<<Vec4.size()<<endl;
    //Vec3.push_back('c');
    //Display(Vec3);
   // Vec2.push_back('c');
    //Display(Vec2);

//Display(Vec1);
    int element,size=5;
    //cout<<"enter the size of vector "<<endl;

    //cin>>size;
   // for(int i=0;i<4;i++){
    //    cout<<"enter an element to add to vector :";
     //   cin>>element;
    //    Vec1.push_back(element );
        //Vec1.pop_back();
        //Display(Vec1 );
       // vector <int > :: iterator iter =Vec1.begin();
       
       // Vec1.insert(iter+1, 5 ,  556);
      //  Display(Vec1 );
    
    return 0;
}