#include<iostream>
using  namespace std;
/*
student -->test
student-->sport
test-->result
sports=-->result


*/
class student{
    protected:

int roll_no;
public:
void set_number(int a){
    roll_no=a;
}
void print_number(void){
    cout<<"your roll no is "<<roll_no<<endl;

}
};
class test : virtual public student{
    protected:
    float maths ,physics;
    public:
    void set_marks(float m1 , float m2){
        maths =m1;
        physics= m2;
    }
    void print_marks(void){
        cout<<"your result is here "<<endl;
        cout<<"maths "<<maths<<endl;
        cout<<"physics "<<physics<<endl;
    }
};
class sports :virtual public student{
    protected:
    int score;
    public:
    void set_score(int sc){
        score =sc;

    }
    void print_score(){
        cout<<"your pt score is "<<score<<endl;
    }
};
class result :public test, public sports{
    private:
    float total;
    public :
    void display(void){
        total=maths +physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is "<<total<<endl;
    }
};
int main(){
    result harry;
    harry.set_number(420);
 harry.set_marks(78.5,67.8);
harry.set_score(8);
harry.display();
return 0; 
}

 











