#include<iostream>
#include<list>
using namespace std;

class youtube1 {
private:
    string Name;
    int subs;
    list<string> publishvdo;
protected:
    string Owner;
    int quality;
public:
    youtube1(string name, string owner) {
        Name = name;
        owner = owner;
        subs = 0;
        quality = 0;
    }
    void getinfo() {
        cout<<"name: "<<Name<<endl;
    cout<<"Owner name: "<<Owner<<endl;
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
    void chekanalytics() {
        if (quality<5) {
            cout<<Name<<"Has a bad quality of this chnannel"<<endl;
        }
        else {
            cout<<Name<<"Has a great qulity"<<endl;
        }
    }
};

class cookingchnl : public youtube1 {
public:
    cookingchnl(string name , string owner) : youtube1(name, owner) {

    }
    void practice() {
        cout<<Owner<<"Practicing cooking , Learning new dishes..."<<endl;
        quality++;
    }

};

class singerchnl : public youtube1{
public:
    singerchnl(string name, string owner) : youtube1(name, owner) {
    }
    void practice() {
        cout<<Owner<<"Practicing singing and Lyrics..."<<endl;
        quality++;
    }

};

int main() {
    cookingchnl cookingchnl1("laufey ", " lover girl");
    singerchnl singerchnl1 ("Arpit bala ", " ik kudi");
    cookingchnl1.practice();
    cookingchnl1.practice();
    cout<<endl;
    singerchnl1.practice();
    singerchnl1.practice();
    singerchnl1.practice();
    singerchnl1.practice();
    singerchnl1.practice();
    cout<<endl;

    youtube1*yt1=&cookingchnl1;
    youtube1*yt2=&singerchnl1;

    singerchnl1.subscribe();
    singerchnl1.subscribe();
    singerchnl1.subscribe();
    singerchnl1.getinfo();
    singerchnl1.publishvedio("Tera chehra");
    cout<<endl;
    yt1->chekanalytics();  
    cout<<endl;

    cookingchnl1.subscribe();
    cookingchnl1.subscribe();
    cookingchnl1.getinfo();
    cookingchnl1.publishvedio("Idli dosa sambhar");
    cout<<endl;
    yt2->chekanalytics();

    return 0;
}