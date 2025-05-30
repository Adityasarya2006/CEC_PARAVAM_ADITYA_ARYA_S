#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <cstring>
using namespace std;

void Log(const string &act, const string &file)
{
    ofstream of(file, ios::app);

    if(of.is_open())
    {
        time_t now = time(nullptr);
        char *dt = ctime(&now);

        dt[strcspn(dt, "\n")] = '\0';
        of << "[" << dt <<"]"<< act <<"\n";
        of.close();
        cout <<"Activity Logged.\n";

    }
    else
    {
        cout<<" Unable To Open Log File.\n";
    }
}

void rdlog(const string &file)
{
    ifstream inf(file);
    if (inf.is_open())
    {
        string line;
        cout<< "Actinity Logged.\n";
        while(getline(inf, line))
        {
            cout<< line<<"\n";

        }
        inf.close();
    }
    else
    {
        cout<< "Unable To Open Log File.\n";
    }
}

int main()
{
    string file = "Activity.log";
    Log("User Logged In", file);
    Log("User Performed An Action.\n", file);
    rdlog(file);



    return 0;
}