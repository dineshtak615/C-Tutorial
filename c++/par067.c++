/* rule of virtual function
1. they cannot be static
2.they are accessed by object pointer 
3.virtual function can  be a friend of another class
4.a virtual function in a base might not be used 
5.virtual function defined in the base class , there is no necessity of redifineing it the derived class 

*/
#include<iostream>
#include<cstring>
using namespace std;
class chw{
    protected :
    string  title;
    float ratting;
    public:
    chw(string s,float r){
        title =s;
        ratting =r;

    }
    virtual void display()=0;//d0 notting  --> it is pure virtual class function ,it's define in base class then we make derived class after we must have to define display without display function  'program give to error


};
class chwvideo : public chw{
    float videolength;
    public :
    chwvideo(string s, float r, float vlen):chw(s,r){
        videolength = vlen;

    }
    void display(){
       cout<<"this is an amazinng video with tittle "<<title<<endl;
        cout<<"ratting "<<ratting<<" out of 5 star "<<endl;
       cout<<"words of text file  :"<<videolength<<endl;

   }
    
};
class chwtext : public chw{
    int  words;
    public :
    chwtext(string s, float r, int ws):chw(s,r){
        words =ws;

    }void display(){
    cout<<"this is an amazinng video with tittle "<<title<<endl;
      cout<<"ratting "<<ratting<<" out of 5 star "<<endl;
     cout<<"words of text file  :"<<words<<endl;

  }
};
int main(){
    string title;
    float  ratting , vlen;
    int words;


    title="django tutorial text ";
    words=344;
    vlen=4.9;
    ratting =4.88;
    chwvideo djvideo(title , ratting ,vlen);
    //djvideo.display();
   chwtext djtext(title ,ratting ,words );
    //djtext.display();
    chw *tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;
    tuts[0]->display();
tuts[1]->display();

}


