#include<iostream>
using namespace std;

class ABC{
    virtual void display() = 0;// pure virtual function
};

class Shape: ABC{
    public:
    void display(){
        cout<<"hello"<<endl;
    }

};

int main(){
    Shape s1;
    s1.display();
    return 0;
}