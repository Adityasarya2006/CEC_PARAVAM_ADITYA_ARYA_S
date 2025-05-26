#include<iostream>
using namespace std;
class sample{
    int *data;
public:
  sample(){
    data = new int;
    *data = 10;
    cout <<"Constructor: Memory allocated."<< endl;
}
~sample(){
    delete data;
    cout <<"Destructor : Memory released."<< endl;
 }
};
int main(){
    sample s1;
    return 0;
}