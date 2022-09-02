/*
Note: 
Default Copy constructor is called in following condition:
    1. if there is no copy constructor specified
    2. using assignment operator after declaration
*/

#include<iostream>
using namespace std;

class Number
{
    private:
        int n;
    
    public:

        Number(){} // default constructor
        Number(int num){
            n = num;
        }

        void display(){
            cout<<"this obj value is "<<n<<endl;
        }

        // copy constructor
        Number(Number &obj){
            cout<<"------custom cpy constructor is called------"<<endl;
            n = obj.n;
        }
};

int main(){
    Number a(2);
    a.display();

    Number b(a);// calling custom cpy constructor
    b.display();

    Number c = a; // another way of calling custom cpy constuctor
    c.display();


    Number d;
    d = a; // here default copy constructor is being called

    return 0;
}