// Operator Overloading:- unary operator
#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    void input(){
    cout<<"Enter the complex number : ";
    cin>>a>>b;
    }
    void display();
    complex operator ++(){ // pre increment
        complex temp;
        temp.a=++a;
        temp.b=++b;
        return temp;
    }
     complex operator ++(int){ // post increment 
     complex temp;
        temp.a=a++;
        temp.b=b++;
        return temp;
    }
};
void complex:: display(){ // defining outside of member function
    cout<<a<<" "<<b<<endl;
    }
int main(){
    complex b1,b3;
    b1.input();
    b1.display();
    b3=++b1;
    b1.display();
    b3.display();
    b3=b1++;
    b1.display();
    b3.display();
    return 0;
}


