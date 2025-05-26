#include <iostream>
using namespace std;

class Camera
{
    public:
    void takePhoto()
    {
        cout <<"Taking photo." <<endl;
    }
};
class Phone
{ 
    public:
    void makecall()
    {
        cout << "Making a call..." <<endl;
    }
};

class smartPhone : public Camera, public Phone{
    public:
       void browseInternet(){
        cout << "Browsing internet..." << endl;
       }
};

int main(){
    smartPhone sp;
    sp.takePhoto();
    sp.makecall();
    sp.browseInternet();
    return 0;
}