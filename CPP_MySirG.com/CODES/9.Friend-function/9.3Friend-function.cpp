// overloading of operator as a friend function
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
    void showData(){
        cout<<a<<" "<<b<<endl;
    }
    friend complex operator +(complex, complex);
};
complex operator +(complex m, complex n){
    complex temp;
    temp.a=m.a+n.a;
    temp.b=m.b+n.b;
    return temp;
}
int main(){
    complex c1,c2,c3;
    c1.setData(5,6);
    c2.setData(5,6);
    c3=c1+c2; // c3=operator+(c1,c2)
    c3.showData();
    return 0;
}