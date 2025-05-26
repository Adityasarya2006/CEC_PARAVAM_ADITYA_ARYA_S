#include<iostream>
using namespace std;
class student{
    public:
       string name;
       int age;
       string usn;
       string clgname;
       student(string n,int a,string u,string c){
        name=n;
        age=a;
        usn=u;
        clgname=c;
        cout <<"Name:" << name<< "Age:" << age << "USN:" << usn << "Clgname:" << clgname << endl;
        }
        };
        int main(){
            student s1("Dhanush ",20,"1CEC AIML","CEC");
            student s2("Aditya",20,"1CEC AIML","CEC");
            student s3("Sarath",20,"1CEC AIML","CEC");
            student s4("Pavan",20,"1CEC AIML","CEC");
            return 0;
        }