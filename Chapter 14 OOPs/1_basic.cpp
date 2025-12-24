#include<iostream>
using namespace std;
class Student{
    public:
    char name;
    int age;
    int rollNo;

};

int main(){
    Student Pankaj;
    Pankaj.name='P';
    Pankaj.age=20;
    Pankaj.rollNo=114124071;

    cout<<Pankaj.name<<endl;
    cout<<Pankaj.rollNo<<endl;
    cout<<Pankaj.age<<endl;

    Student ashok;
    ashok.name='A';
    ashok.age=29;
    ashok.rollNo=123;
    
    cout<<ashok.name<<endl;
    cout<<ashok.rollNo<<endl;
    cout<<ashok.age;

}