#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string a = "khan-raquib";
	string b = "101";


	// strings methods
	string c;
	int d;
	a.length();
	a.size(); // finding length/size
	c = a+b; // concatenation
	c = a.append(b); // append
	d = a.compare(b); // compare
	d = a.empty(); // checks if empty
	a.erase(2,4); // erase 4 char from index 2
	d = a.find("raq"); // find
	a.insert(2,"laal"); // inserting at index 2
	c = a.substr(2,4); // substr of 4 char from 2nd index
	d = stoi(b); // str to int
	c = to_string(d); // convert to str
	sort(a.begin(),a.end()); // sorting using iterator pointer
	sort(a.begin(),a.end(),greater<int>()); // sorting using iterator pointer
	a.clear(); // clear
	transform(a.begin(),a.end(),a.begin(),::toupper); // transform
	// parameters: start of str, end of str, apply transform from?, transform-type

}