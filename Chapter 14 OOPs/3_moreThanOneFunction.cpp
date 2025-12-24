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
class Calculator{
    public:
    int a;
    int b;
    void add(){
         cout<<a+b<<endl;
    }
    void subtract(){
        cout<<a-b<<endl;
    }
    void multiply(){
        cout<<a*b<<endl;
    }
    void division(){
        cout<<a/b<<endl;
    }
};

int main(){
    Calculator Calc;
    Calc.a=10;
    Calc.b=20;
    Calc.add();
    Calc.subtract();
    Calc.multiply();
    Calc.division();

}