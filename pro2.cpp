#include<iostream>
using namespace std;
class student
{
    public:
       string name;
       int age;
       student(string n,int a)
       {
        name=n;
        age=a;
        cout <<"Name:" << name<< ",Age:" << age << endl;
        }
};
int main()
{
    student s1("Dhanush",20);
    return 0;
}