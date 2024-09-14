// Virtual function
#include<iostream>
using namespace std;
class A{
    public:
        virtual void f1(){ cout<<"A"<<endl;} // virtual function
};
class B: public A{
    public:
    void f1(){cout<<"B"<<endl; } // function overriding
    void f2(){ }
};
int main(){
    A *p, o1;
    B o2;
    p=&o2;
    o2.f1(); // B
    o1.f1(); // A
    // if we use parent class pointer due to early binding it will find first in parent. when we add virtual keyboard due to late binding it will go first in child class.
    p->f1(); // in early binding A. in late binding B.
}