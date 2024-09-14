// Multiple Inheritance
#include<stdio.h>
class A{
    int x;
    public:
        void fun(){}
};

class B{ 
    int y;
    public:
        void fun1(){}
};

class C: public A, public B{ 
    int z;
    public:
        void fun2(){}
};