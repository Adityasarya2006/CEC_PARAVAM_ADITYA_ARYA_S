#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Std
{
    std::string name;
    int age;
    float grade;
};

void Stdfile(const std::vector<Std>& sts, const std::string& file)
{
    std::ofstream outFile(file);

    if(outFile.is_open())
    {
        for(const auto& st : sts)
        {
            outFile << st.name <<", "<<st.age<< ", "<<st.grade<< "\n";
        }
        outFile.close();
        std::cout<< "Student Data Written To File,\n";

    }
    else
    {
        std::cout<< "Unable To Opem File For Writing.\n";
    }
}

void realFile(const std::string &file)
{
    std::ifstream infile(file);
    if(infile.is_open())
    {
        std::string line;
        std::cout <<"Reading Std Data From File.\n";
        while(std::getline(infile, line))
        {
            std::cout<<line<<endl;
        }
        infile.close();
    }
    else
    {
        std::cout<< "Unable To Open File Foe Reading.\n";
    }
}

int main()
{
    std::vector<Std> std = {
        {"Musa", 18, 90.0}, {"Quinn", 17, 85.6}, {"Leo", 34, 94.8}
    };

    std::string file = "std.txt";
    Stdfile(std, file);
    realFile(file);


    return 0;
}