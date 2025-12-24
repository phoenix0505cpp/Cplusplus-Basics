#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string name, int rno, float marks){
        this->name =name;
        (*this).rno=rno;
        this->marks=marks;
    }
};
int main(){
    Student s("pankaj",55,99);
    Student* ptr=&s; 
    cout<<s.name<<endl;
    ptr->name="ashok";
    //or (*ptr).name="pankaj";
    cout<<s.name;


}