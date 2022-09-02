#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    // writing a file
    ofstream out_obj("file.txt");
    string s = "This line is written through fileio.cpp program.";
    
    for(int i = 0; i<3; i++){
        out_obj<<i<<". "<<s<<endl;
    }

    // appending a file
    ofstream out_obj("file.txt",std::ios_base::app);
    string s = "This line is written through fileio.cpp program.";
    
    for(int i = 0; i<3; i++){
        out_obj<<i<<". "<<s<<endl;
    }


    cout<<"----------------reading word by word-------------------"<<endl;
    // reading a file
    ifstream in_obj("file.txt");
    string s2;
    while(in_obj.eof()==0){
        in_obj>>s2;
        cout<<s2<<endl;
    }
    cout<<"-------------------------------------------------------"<<endl;

    // reading using getline
    cout<<"reading line by line"<<endl;
    ifstream in_obj2("file.txt");
    string s3;
    while(in_obj2.eof()==0){
        getline(in_obj2,s3);
        cout<<s3<<endl;
    }




    return 0;
}