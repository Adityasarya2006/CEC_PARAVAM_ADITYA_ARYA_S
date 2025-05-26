#include <iostream>
using namespace std;

class student {
    private:
       int rollnumber;

    public:
     void setrollnumber(int r){
        rollnumber = r;
     }
     int getrollnumber(){
        return rollnumber;
     }
};

int main(){
    student s1;
    s1.setrollnumber(111);
    cout << s1.getrollnumber()<< endl;

    return 0;
}