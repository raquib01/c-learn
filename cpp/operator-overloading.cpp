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
        Number(int num){
            n = num;
        }

        void display(){
            cout<<"this obj value is "<<n<<endl;
        }

        int operator+(Number);

};

int Number::operator+(Number obj){
    return this->n + obj.n + 1;
};

int main(){
    Number n1(4);
    Number n2(5);
    cout<<n1+n2<<endl;
    return 0;
}