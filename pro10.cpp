#include<iostream>
using namespace std;
class car{
    public:
      string brand;
      int speed;
      car(){
        brand = "Toyota";
        speed = 0;
        cout <<"Default constructor called."<< endl;
      }
      void drive(){
        cout <<"Driving" << brand << "at" << speed << "km/h"<< endl;
      }
};
int main(){
    car c1;
    c1.drive();
    return 0;
}