#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
// complexity nlog(n)
bool chk(int i, int j){
	// comparator takes two parameter and return True if order is correct, else False
	return i>j;
}
int main(){
	int n = 5;
	int arr[n] = {5,4,3,2,1};

	// sorting without using comparator function
	sort(arr,arr+n); // 1st para: begin iterator   2nd para: end iterator
	cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<endl;


	// sorting using comparator function
	sort(arr,arr+n,chk);
	cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<endl;


	// sorting of string
	string s = "ABCD";
	sort(s.begin(),s.end()); // without comp
	cout<<s<<endl;

	sort(s.begin(),s.end(),chk);// with comp
	cout<<s<<endl;



}