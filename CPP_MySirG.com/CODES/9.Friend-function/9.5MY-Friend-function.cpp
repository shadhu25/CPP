// overloading of unary operator(<<) (>>) as a friend function
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
    friend complex operator >>(complex,complex&);
    friend complex operator <<(complex,complex);
};
complex operator >>(complex m, complex &n){
    cout<<"Enter complex number: ";
    cin>>n.a>>n.b;
    return n;
}
complex operator <<(complex m, complex n){
    cout<<"a = "<<n.a<<" b = "<<n.b<<endl;
    return n;
}
int main(){
    complex cin,c1,c2,cout;
    cin>>c1>>c2;
    cout<<c1<<c2;
    return 0;
}