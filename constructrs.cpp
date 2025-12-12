#include <iostream>
#include <list>
using namespace std;

class youtubechannel {
public:
    string name;
    string ownername;
    int subs;
    list<string> vedio;

    youtubechannel(string name, string ownername) {
        name = name;
        ownername = ownername;
        subs = 0;

    }

    void getinfo() {
    cout<<"name: "<<name<<endl;
    cout<<"Owner name: "<<ownername<<endl;
    cout<<"subs: "<<subs<<endl;
    cout<<"Vedios: "<<endl;
    for (string vedio : vedio) {
        cout<<vedio<<endl;
    }
    }
};

int main() {
    youtubechannel ytchnl1("fun with magnets", "Pulkit");
    ytchnl1.vedio.push_back("Vedio One");
    ytchnl1.vedio.push_back("Vedio two");
    ytchnl1.vedio.push_back("Vedio three");
    cout<<endl;

    youtubechannel ytchnl2("laufey songs", "laufey");

    cout<<endl;

    ytchnl1.getinfo();
    ytchnl2.getinfo();


    return 0;

}