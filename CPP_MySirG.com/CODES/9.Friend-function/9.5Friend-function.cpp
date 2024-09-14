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
    friend istream& operator >>(istream&,complex&);
    friend ostream& operator <<(ostream&,complex);
};
istream& operator >>(istream &din, complex &n){
    cout<<"Enter complex number: ";
    cin>>n.a>>n.b;
    return din;
}
ostream& operator <<(ostream &dout, complex n){
    cout<<"a = "<<n.a<<" b = "<<n.b<<endl;
    return dout;
}
int main(){
    complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}