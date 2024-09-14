#include<iostream>
using namespace std;
class A{
    public:
        void fun(){}
        void fun1(){}
};

class B{
    public:
        // friend class A; for making all members as friend function 
        friend void A::fun(){}
        friend void A::fun1(){}
};