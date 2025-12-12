#include <iostream>
using namespace std;

class instrument {
public:
    virtual void makesound() {
        cout<<"the instrument is playing..."<<endl;
    }
};

class accordian : public instrument {
public:
    void makesound() {
        cout<<"Accordian is playing..."<<endl;
    }
};

int main() {
    instrument* i1 = new accordian();
    i1->makesound();  
    return 0;
}