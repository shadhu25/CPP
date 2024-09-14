// when we use private inheritence(is a relation)
#include<iostream>
using namespace std;
class Array{
    private:
        int a[10];
    public:
        void insert(int index0, int value1){
            a[index0]=value1;
        }
    void display1(int index1){
        cout<<a[index1]<<endl;
    }
};

class STACK: private Array{
    int top;
    public:
        void push(int value2){
            insert(top,value2);
        }
    void display(int index2){
        display1(index2);
    }
}; 

int main(){
    STACK s1;
    // for NOT  accessing insert() function we inherit as private
    s1.push(34);
    s1.display(0);
}