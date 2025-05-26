#include<iostream>
using namespace std;

class Book{
    public:
    string title;
    string author;
    string name;
    void display(){
        cout << "Title:" << title << ",Author:," << author << "Name: " << name << endl;
    }
};

    int main(){
        Book b1;
        b1.title = "The one piece";
        b1.author = " Eiichiro Oda";
        b1.display();
        return 0;
    }