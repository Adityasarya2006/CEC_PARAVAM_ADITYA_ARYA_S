#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

struct Std
{
    string name;
    int age;
    char gr;

    /* data */
};

void ads()
{
    Std s;
    cout << "Enter Studemt Name: ";
    cin>>s.name;
    cout << "Enter Age: ";
    cin>> s.age;
    cout <<"Grade: ";
    cin>>s.gr;


    ofstream  of("St.txt", ios::app);
    if(of.is_open())
    {
        of<< s.name<<" "<< s.age<< " "<< s.gr<<endl;
        of.close();
        cout << "Student Record Added.";
    }
    else
    {
        cerr << "Error OPening File For Writing.\n";
    }
}


void dis()
{
    ifstream inf("St.txt");

    string line;
    cout <<"\n === Student records === \n";

    while (getline(inf, line))
    {
        cout << line<<endl;
        /* code */
    }
    inf.close();
    
}

void srch()
{
    string name;
    cout << "Enter  The Student To search: ";
    cin>> name;

    ifstream inf("St.txt");
    string line;
    bool fn = false;
    while (getline(inf, line))
    {
        istringstream iss(line);
        string n;
        int age;
        char g;
        iss >> n >> age >> g;
        if (n == name)
        {
            cout <<"Student Name: "<< line <<endl;
            fn =true;
        }
        /* code */
    }

    inf.close();
    if(!fn)
    {
        cout <<"Student Not Found.\n "<<endl;
    }

    
}

//inf.close();
void upgr()
{
    string name;
    char gr;
    cout <<"Enter Student To Update Grade: ";
    cin >>name;
    cout <<"Enter New Grade: ";
    cin >>gr;

    ifstream inf("St.txt");
    vector<Std> st;
    string line;
    bool up = false;

    while (getline(inf, line))
    {
        istringstream iss(line);
        Std s;
        iss >> s.name>>s.age>>s.gr;

        if(s.name == name)
        {
            s.gr = gr;
            up = true;
        }
        st.push_back(s);
        /* code */
    }
    inf.close();

    ofstream of("St.txt");
    for (const Std &s : st)
    {
        of<<s.name<<" " <<s.age<< " "<<s.gr<<endl;
    }
    of.close();

    if(up)
    {
        cout << "Grade Updated !!";

    }
    else
    {
        cout <<"Student Not Found.";
    }

    
}




int main()
{
    int ch;
    do
    {
        cout <<"\n=== Student Management Menu ===\n";
        cout <<"1. Add Student\n2. Display All Students\n3. Search Student By Name\n4. Update Student Grade\n5.Exit\n";
        cout <<"Enter Your Choice: ";
        cin>>ch;
        /* code */

        switch (ch)
        {
        case 1:
            ads();
            /* code */
            break;

        case 2:
            dis();
            break;

        case 3:
            srch();
            break;

        case 4:
            upgr();
            break;
        
        case 5:
            cout <<"Exiting...";
            break;

        default:
            cout<<"Invalid Input: ";
            break;
        }
    } while (ch !=5);
    



    return 0;
}