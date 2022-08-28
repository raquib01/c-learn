#include<iostream>
#include<string.h>
using namespace std;

int add(int a, int b){
	cout<<"using f1: ";
	return a+b;
}

int add(string a, string b){
	cout<<"using f2: "<<a + b;
	return 1;
}

int add(int a, int b, int c){
	cout<<"using f3: ";
	return a+b+c;
}

int ret_int(int a, float b){
	cout<<"using f4: ";
	return a;
}

int ret_int(float a, int b){
	cout<<"using f5: ";
	return b;
}

int main(){

	cout<<add(1,2)<<endl;
	cout<<add("raq","uib")<<endl;
	cout<<add(1,2,3)<<endl;
	cout<<ret_int(1,2.5)<<endl;
	cout<<ret_int(1.5,2)<<endl;
	return 0;
}