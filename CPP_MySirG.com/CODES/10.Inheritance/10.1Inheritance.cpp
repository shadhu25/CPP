// Inheritance: Availability & Accessibility
#include<iostream>
using namespace std;
class A{
    private:
        int a;
        float b;
    protected:
        void setData(int x, float y){
            a=x; b=y;
        }
    public:
        void Display(){
            cout<<"a = "<<a<<" b = "<<b<<endl;
        }
};

class B1: private A{ 
    /*
        In class B1(Accessibility)
            private members is not Accessible of class A
            protected members of class A will act as private member in class B1
            Public member of class A will act as private member in class B1
        for user 1(object) of class B1 
            nothing is accessible of class A
            only public members is accessible of class B1 
        for user 2(child class) of class B1
            nothing is accessible of class A
            only public and protected members is accessible of class B1 
    */
};

class B2: protected A{
    /*
        In class B2(Accessibility)
            private members is not Accessible of class A 
            protected members of class A will act as protected member in class B2
            Public member of class A will act as protected member in class B2
        for user 1(object) of class B2 
            nothing is accessible of class A
            only public members is accessible of class B2 
        for user 2(child class) of class B2
            only protected and public members is accessible of class A
            only protected and public members is accessible of class B2
    */
};

class B3: public A{
    /*
        In class B3(Accessibility)
            private members is not Accessible of class A 
            protected members of class A will act as protected member in class B3
            Public members of class A will act as public member in class B3
        for user 1(object) of class B3
            only public members is accessible of class A
            only public members is accessible of class B3 
        for user 2(child class) of class B2
            only protected and public members is accessible of class A
            only protected and public members is accessible of class B3 
    */
};

int main(){

}