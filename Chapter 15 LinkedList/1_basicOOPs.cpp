#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string n, int r, float m){
        name =n;
        rno=r;
        marks=m;
    }

};
int main(){
Student s("pankaj",55,99.9);
cout<<s.marks<<endl;
cout<<s.name<<endl;
cout<<s.rno;

}