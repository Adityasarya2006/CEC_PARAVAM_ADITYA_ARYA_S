#include <iostream>
#include <stdexcept>
using namespace std;

double div(double num, double deno)
{
    if (deno == 0)
    {
        throw invalid_argument{"Division By Zero Is Undefined."};
    }
    return num / deno;
}

int main()
{
    double n1, n2;
    cout <<"Enter Numerator: ";
    cin>>n1;
    cout <<"Enter Denominator: ";
    cin >> n2;

    try
    {
        double r = div(n1, n2);
        cout <<"Result: "<< r <<"\n";
        

    }
    catch(const std::invalid_argument &e)
    {
        cout <<"Exception: "  << e.what() << '\n';
    }
    


    return 0;
}