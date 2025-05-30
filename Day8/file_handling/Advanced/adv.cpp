#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    std::ofstream of("Data.txt");
    of << "C++ File I/O";
    of.close();

    std::ifstream inf("Data.txt");
    std::string cont;
    inf >> cont;
    inf.close();

    std::cout<<"Read From File: "<<cont<<"\n";

    return 0;
}