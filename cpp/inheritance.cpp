#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;

// ------------- BASE CLASS-------------------
class Employee{
    private:
    
    public:
        char* name;
        int role;
        Employee(char* n, int role);
        void getData();
};

Employee::Employee(char*n, int r){
    cout<<"Base class construtor called"<<endl;
    name = (char*)malloc(sizeof(char)*20);
    strcpy(name,n);
    role = r;
}

void Employee::getData(){
    cout<<"Name: "<<name<<endl;
    cout<<"Role: "<<role<<endl;
}
// -------------------------------------------

//  -----------Derived Class------------------
class Programmer: public Employee{
    public:
        int code;
        void getCode();
        Programmer(char*n,int r,int c);
};

Programmer::Programmer(char*n,int r,int c):Employee(n,r){
    cout<<"prog constructor called"<<endl;
    code = c;
}

void Programmer::getCode(){
    cout<<"Code: "<<code<<endl;
}
// -------------------------------------------


int main(){
    char s[20] = "Raquib Khan";
    Employee e1(s,2);
    e1.getData();

    strcpy(s,"John Alia");
    Programmer p1(s,3,101);
    p1.getData();
    p1.getCode();


    return 0;
}