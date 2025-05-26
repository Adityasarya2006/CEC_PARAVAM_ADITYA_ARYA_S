#include <iostream>
using namespace std;

class Person
{
    public:
    void introduce()
    {
        cout <<"I am a person." <<endl;
    }
};
class Student : public Person
{ 
    public:
    void study()
    {
        cout << "Studing..." <<endl;
    }
};

class Employee : public Person {
    public:
       void work(){
        cout << "working..." << endl;
       }
};

class WorkingStudent : public Student , public Employee{
    public:
      void manage(){
        cout << "Managing both work and studies."<< endl;
      }
};
int main(){
   WorkingStudent ws;

   ws.Student::introduce();
   ws.Employee::introduce();
   ws.study();
   ws.work();
   ws.manage();
   return 0;
}