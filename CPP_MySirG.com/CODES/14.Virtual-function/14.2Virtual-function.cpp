// virtual funtion
#include<iostream>
using namespace std;
class A{
    public:
        void f1(){
            cout<<"A-f1"<<endl;
        }
        virtual void f2(){
            cout<<"A-f2"<<endl;
        }
        virtual void f3(){
            cout<<"A-f3"<<endl;
        }
        virtual void f4(){
            cout<<"A-f4"<<endl;
        }
};
class B: public A{
    public:
        void f1(){
            cout<<"B-f1"<<endl;
        }
        void f2(){
            cout<<"B-f2"<<endl;
        }
        void f4(int x){
            cout<<"B-f4"<<endl;
        }
};

int main(){
    A *p,obj1;
    p=&obj1; 
    p->f1(); // early binding, class A will call
    p->f2(); // late binding, class A will call
    p->f3(); // late binding, class A will call
    p->f4(); // late binding, class A will call
    // p->f4(5); // early binding, give error
    cout<<endl<<endl;
    B obj2;
    p=&obj2;
    p->f1(); // early binding, class A will call
    p->f2(); // late binding, class B will call
    p->f3(); // late binding, class A will call
    p->f4(); // late binding, class A will call
    // p->f4(5); // early binding, give error
    return 0;
}