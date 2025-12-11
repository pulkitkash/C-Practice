#include <iostream>
#include <list>
using namespace std;

class youtubechannel {
public:
    string name;
    string ownername;
    int subs;
    list<string> vedio;

};

int main() {
    youtubechannel ytchanel;    
    ytchanel.name= "Pulkitnaked";
    ytchanel.ownername=" Pulkit kashyap";
    ytchanel.subs=2000;
    ytchanel.vedio = {"C++" , "java coding" , "Mr beast" , "kai cenat"};

    cout<<"name : "<<ytchanel.name<<endl;
    cout<<"Owner name : "<<ytchanel.ownername<<endl;
    cout<<"Subs : "<<ytchanel.subs<<endl;

    cout<<"Vedios: "<<endl;
    
    for (string vedio : ytchanel.vedio) {
        cout<<vedio<<endl;
    }

    cout<<endl;

    youtubechannel ytchnl;
    ytchnl.name = "Casetoo";
    ytchnl.ownername = "Shivam";
    ytchnl.subs = 3000;
    ytchnl.vedio = {"BGMI " , "Teri ma ki" , "Hindi porn" , "abe HIzde"};
    
    cout<<"name: "<<ytchnl.name<<endl;
    cout<<"Owner name: "<<ytchnl.ownername<<endl;
    cout<<"subs: "<<ytchnl.subs<<endl;

    cout<<"Vedios: "<<endl;

    for (string vedio : ytchnl.vedio) {
        cout<<vedio<<endl;
    }


    return 0;

}