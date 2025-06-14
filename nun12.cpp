#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    string model;
    int year;

public:
    Vehicle(string m, int y)
    {
        model = m;
        year = y;
    }
    void show()
    {
        cout << "Model: " << model << ", year: " << year << endl;
    }
};

int main()
{
    Vehicle *v1 = new Vehicle("Toyata Camry", 2022);
    Vehicle *v2 = new Vehicle("Tesla Model 3", 2023);
    
    v1->show();
    v2->show();

    delete v1;
    delete v2;

    return 0;
}