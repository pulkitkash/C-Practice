#include<iostream>
#include<list>
using namespace std;

class youtube1 {
private:
    string name;
    int subs;
    list<string> publishvdo;
protected:
    string owner;
public:
    youtube1(string Name, string owner) {
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

class cookingchnl : public youtube1 {
public:
    cookingchnl(string name , string owner) : youtube1(name, owner) {

    }
    void practice() {
        cout<<owner<<"Practicing cooking , Learning new dishes..."<<endl;
    }

};

int main() {
    cookingchnl ytchnl ("laufey songs are dope", "laufey the goat");
    ytchnl.publishvedio("from the start");
    ytchnl.publishvedio("lovers girl ");
    ytchnl.subscribe();
    ytchnl.subscribe();
    ytchnl.getinfo();
    ytchnl.practice();

    return 0;
}