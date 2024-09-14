// friend function can be member of more than one class
#include<iostream>
using namespace std;
class hanuman;
class krishn{
    private:
    int a;
    public:
    void setData(int x){
        a=x;
    }
    friend void ram(krishn, hanuman); // decalation of friend function
};
class hanuman{
    private:
    int b;
    public:
    void setData(int y){
        b=y;
    }
    friend void ram(krishn, hanuman); // decalation of friend function
};
void ram(krishn k, hanuman h){ // definition of friend function
    cout<<"The sum is: "<<k.a+h.b<<endl;
}
int main(){
    krishn k1;
    k1.setData(5);
    hanuman h1;
    h1.setData(5);
    ram(k1,h1); // calling of friend function
    return 0;
}