#include <iostream>
#include <fstream>
#include <ctime>
#include<cstring>
using namespace std;

string time()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    string tm(dt);
    tm.pop_back();

    return tm;
}

void write(int uid, const string &act)
{
    ofstream of("Log.txt", ios::app);

    if(!of)
    {
        cerr << "Error: Could not Open Log.txt For Writing.\n";
        return;
    }

    of << "[ User ID"<<uid<<"] "<<act << " At "<< time();
    of.close();
    cout <<"Log Written Successfully,\n";
}

void read()
{
    ifstream inf ("Log.txt");

    if (inf)
    {
        cerr << "Error: Could not Open Log.txt For Writing.\n";
        return;
    }

    cout <<"\n --- Log File Contents ---\n";
    string line;
    while (getline(inf, line))
    {
        cout << line <<endl;
    }
    inf.close();

}

void clr()
{
    ofstream of("Log.txt", ios::trunc);

    if (!of)
    {
        cerr << "Error: Could not Open Log.txt To Clear.\n";
        return;
    }
    of.close();
    cout <<"All Logs Have Been Cleared.\n";
}

int main()
{
    int ch, id;
    string act;

    do
    {
        /* code */
        cout <<"\n === Log Management ===\n";
        cout << "1. Write A Log.\n";
        cout << "2. View All Log.\n";
        cout << "1. Clear All Log.\n";
        cout << "4. Exit.\n";

        cout <<"Enter Your Choice: ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout << "Enter User ID: ";
            cin>>id;
            cin.ignore();
            cout << "Enter Action(e.g Logged In, Viewed Page): ";
            getline(cin, act);
            write(id, act);
            /* code */
            break;
        case 2:
            read();
            break;
        case 3:
            clr();
            break;
        case 4:
            cout <<"Exiting Program. ";
            break;

        
        default:
            cout << "Invalid Choice. Please Try Again.\n ";
        }
    } while (ch != 4);
    


    return 0;
}