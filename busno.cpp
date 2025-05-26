#include<iostream>
using namespace std;

class bus{
    public:
       string busnumber;
       string route;
       int capacity;

       void display(){
        cout<<"Bus Number: " << busnumber << endl;
        cout<<"routes:" << route << endl;
        cout<<"capacity" << capacity << endl;
       }
};

int main(){
    bus b1;
    b1.busnumber = "KA 07 1234";
    b1.route = "Bangalore to Mysore";
    b1.capacity = 50;
    b1.display();
    return 0;
}

