#include<iostream>
using namespace std;
class student
{
    public:
       string name;
       int age;
       string usn;
       student(string n,int a, string u)
       {
        name=n;
        age=a;
        usn=u;
        cout <<"Name:" << name<< ",Age:" << age << "USN:" << usn << endl;
        }
};
int main()
{
    student s1("Dhanush",20,"1CEC");
    return 0;
}