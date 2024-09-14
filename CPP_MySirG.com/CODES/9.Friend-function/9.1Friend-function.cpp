// Friend function
#include<iostream>
using namespace std;
class complex{
    private:
    int a;
    int b;
    public:
    void setData(int x, int y){
        a=x;
        b=y;
    }
    friend void fun(complex); // decalation of friend function
};
void fun(complex c){ // definition of friend function
    // it can access private members
    cout<<c.a<<" "<<c.b<<endl;
}
int main(){
    complex c1;
    c1.setData(5,6);
    fun(c1); // calling of friend function
    return 0;
}