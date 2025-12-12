#include <iostream>
#include <fstream>   // When engaging with file.
using namespace std;

main() {

    cout<<endl;

    ofstream onfile;
    onfile.open("E:\\c++ shit\\file1.txt");  //file creation
    onfile<<"kill yourself nigga ";  // this will go in the file
    cout<<"file created and updated in the file"<<endl;  // shows in the console

    cout<<endl;

    onfile.close();

}