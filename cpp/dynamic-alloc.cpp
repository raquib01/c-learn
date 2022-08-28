#include<iostream>
using namespace std;

int main(){
	// initializing pt with NULL
	int* p = NULL;
	p = new int(5);
	// can also assign like this *p = 5
	
	cout<<*p<<endl;

	delete p; // de allocation


	int* q = new int[3]; // allocation of arr
	for(int i = 0; i<3; i++){
		cin>>*(q+i);
	}

	for(int i = 0; i<3; i++){
		cout<<*(q+i)<<endl;
	}

	delete[] q; // de allocation of arr

}