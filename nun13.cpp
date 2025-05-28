#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private: 
    string model;
    int year;
    string owner;

public:
    Vehicle(string m, int y, string o)
    {
        model = m;
        year = y;
        owner = o;
    }

    void show()
    {
        cout << "Model: " <<model
             << ", Year: " << year
             << ", Owner: " <<owner << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of vehicles rented today: ";
    cin >> n;

    Vehicle **fleet=new Vehicle *[n];

    for (int i=0; i<n; i++)
    {
        string model, owner;
        int year;

        cout << "\nenter details for vehile " << (i+1) << ":\n";
        cout << "Model: ";
        cin.ignore();
        getline(cin, model);

          cout << "Year: ";
          cout << year;
          cin.ignore();

        cout << "Owner: ";
        getline(cin, owner);

        fleet[i]=new Vehicle(model, year, owner);
    }

    cout << "\n===== Rented vehicle list =====\n";
    for (int i=0; i<n; i++)
    {
        fleet[i]->show();
    }
    for (int i=0; i<n; i++)
    {
        delete fleet[i];
    }
    delete[] fleet;

    return 0;
}