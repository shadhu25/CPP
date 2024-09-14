// when we use public inheritence(is a relation)
#include<iostream>
using namespace std;
class car{
    private:
        int gear;
    public:
        void incrementGear(){
            if(gear<5)
                gear++;
        }
};

class sportCar: public car{
    int break;
    public:
        void Break(){
            cout<<break;
        }
};

int main(){
    sportCar s1;
    // for accessing incrementgrear() function we inherit as public
    s1.incrementGear();
    s1.Break();
}