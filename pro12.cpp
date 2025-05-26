#include<iostream>
using namespace std;
class car{
    public:
      string brand;
      int speed;
      car(string b, int s){
        brand = b;
        speed = s;
        cout <<"Parameterized constructor called."<< endl;
      }
      void drive(){
        cout <<"Driving" << brand << "at" << speed << "km/h"<< endl;
      }
      };
   int main(){
    car c1("Toyota", 120);
    c1.drive();
    return 0;
}
