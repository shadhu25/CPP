// Hierarchical Inheritance
#include<stdio.h>
class A{
    int x;
    public:
        void fun(){}
};

class B: public A{ 
    int y;
    public:
        void fun1(){}
};

class C: public A{ 
    int z;
    public:
        void fun2(){}
};