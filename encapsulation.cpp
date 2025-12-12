#include<iostream>
#include<list>
using namespace std;

class youtube1 {
private:
    string name;
    string owner;
    int subs;
    list<string> publishvdo;
public:
    youtube1(string name, string owner) {
        name = name;
        owner = owner;
        subs = 0;
    }
    void getinfo() {
        cout<<"name: "<<name<<endl;
    cout<<"Owner name: "<<owner<<endl;
    cout<<"subs: "<<subs<<endl;
    cout<<"Vedios: "<<endl;
    for (string vedio : publishvdo) {
        cout<<vedio<<endl;
    }
    }
    void subscribe() {
        subs++;
    }
    void unsubscribe(){
        if(subs>0) {
            subs--;
        }
    }
    void publishvedio(string title) {
        publishvdo.push_back(title);
    }
};

int main() {
    youtube1 ytchnl("layfey music" , "laufey");
    ytchnl.publishvedio("1st song name");
    ytchnl.publishvedio("2nd vedio name");
    ytchnl.publishvedio("3rd vedio name");
    ytchnl.subscribe();
    ytchnl.subscribe();
    ytchnl.subscribe();
    ytchnl.unsubscribe();
    ytchnl.getinfo();

    return 0;
}