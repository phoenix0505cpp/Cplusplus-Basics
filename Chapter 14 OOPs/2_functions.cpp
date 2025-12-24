#include<iostream>
using namespace std;
class Student{
    public:
    char name;
    int age;
    int rollNo;
    void showAge(){
        cout<<"Age is:"<<age<<endl;
    }

};

int main(){
    Student Pankaj;
    Pankaj.name='P';
    Pankaj.age=20;
    Pankaj.rollNo=114124071;

    Student ashok;
    ashok.name='A';
    ashok.age=29;
    ashok.rollNo=123;
    Pankaj.showAge();
    ashok.showAge();
    
    

}