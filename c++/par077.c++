//list in stl

#include<iostream>
#include<list>

using namespace std;

void display(list <int> lst){
    list<int >:: iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        //cout<<endl;
        cout<<*it<<" ";
    }
    cout<<endl;
}


int main(){

        list <int> list1;//list of zero element 
      list1.push_back(30);
      list1.push_back(45);
      list1.push_back(35);
      //list1.push_back(35);
      //removing element 
      //list1.pop_back();
      //list1.pop_front();
     // list1.remove(35);
     //sorting the list 
     //list1.sort();
     //reversing the list
//list1.reverse();
//display(list1);
     // display(list1);
      cout<<endl;
      list <int > list2(3);//empty list of szie of 7
list<int> :: iterator iter;
iter=list2.begin();
*iter=34;
iter++;
*iter=4;
iter++;
*iter=3;
iter++;
//display(list2);
     // list1.push_back(38);
//swapping 
//list1.swap(list2);
//display(list1);
//list1.sort();
//list2.sort();
     //list1 and list2 merge both
    // list1.merge(list2);
     //cout<<"list 1 after merging ";
     //display(list1);

//list<int > :: iterator iter;
//iter=list1.begin();
//cout<<*iter<<endl;
//iter++;
//cout<<*iter<<endl;
//iter++;
//cout<<*iter<<endl;
    return 0;
}
