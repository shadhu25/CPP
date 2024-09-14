#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void fun1(){ }
    A(int x){
        a=x;
    }
    ~A(){ } // destructor: it is optional because destructor not accept any argument compiler will create it automaticaly
};
class B: public A{
    int b;
    public:
    void fun2(){ }
    // when you created a parameterized constructor you must create a parameterized constructor in child class
    B(int y, int z):A(y) // giving value as actual aggument in comstructor of parent class
    {
        b=z;
    }
    ~B(){ } // destructor: it is optional because destructor not accept any argument compiler will create it automaticaly
};
int main(){

}