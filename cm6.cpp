#include <iostream>
using namespace std;

class Shape
{
    public:
    void setcolor(string c)
    {
        cout <<"Setting color:" <<endl;
    }
};
class Circle : public Shape
{ 
    public:
    void drawCircle()
    {
        cout << "Drawing Circle." <<endl;
    }
};

class Rectangle : public Shape{
    public:
       void drawRectangle(){
        cout << "Drawing Rectangle" << endl;
       }
};

int main(){
   Circle c;
   Rectangle r;
   c.setcolor("Red");
   c.drawCircle();

   r.setcolor("Blue");
   r.drawRectangle();
   return 0;
}