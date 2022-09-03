#include<iostream>
using namespace std;

template <typename T>
T multi(T a, T b){
    return a*b;
}

int main(){
    cout<<multi(2,4)<<endl;
    cout<<multi(2.5,4.6)<<endl;
    return 0;
}