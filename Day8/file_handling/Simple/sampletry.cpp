#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    try
    {
        int age = 15;
        if (age<18)
        {
            throw age;
        }
        else
        {
            cout <<"Access Granted.\n";
        }
        /* code */
    }
    catch(int n)
    {
        cout <<"Access Denied For Age " << n <<  '\n';
    }
    


    return 0;
}