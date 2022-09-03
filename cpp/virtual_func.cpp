#include<iostream>
using namespace std;

class Shape{
    public:
        int x;
        int y;
    
        void display(){
            cout<<"Shape is Called"<<endl;
        }

        virtual void display2(){
            cout<<"Shape is Called"<<endl;
        }
};

class Rect: public Shape{
        void display(){
            cout<<"Rect is Called"<<endl;
        }

        virtual void display2(){
            cout<<"Rect is Called"<<endl;
        }
};


int main(){
    Shape* ptr;     // -> ptr of Shape class
    Rect r1;        // -> object of Rect
    ptr = &r1;

    cout<<"without using virtual keyword"<<endl;
    ptr->display();

    cout<<"using virtual keyword"<<endl;
    ptr->display2();
    return 0;
}