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
void change(Student& s){
    s.name="ashok";
}
int main(){
    Student s("pankaj",55,99);
    cout<<s.name<<endl;
    change(s);
    cout<<s.name;


}