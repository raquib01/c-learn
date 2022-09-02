#include<iostream>
using namespace std;

int sum(int a, int b = 0){
    return a + b;
}

int main(){
    cout<<sum(3,4)<<endl;
    cout<<sum(3)<<endl;    
    return 0;
}