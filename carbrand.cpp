#include<iostream>
using namespace std;

class car {
    public:
     string brand;
    void start(){
        cout<< brand << "car started!" << endl;
    }
};

int main(){
    car c1, c2, c3;
    c1.brand="BMW";
    c1.start();
    c2.brand="Toyota";
    c2.start();
    c3.brand="Ferrari";
    c3.start();
    return 0;
}