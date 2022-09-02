
#include <iostream>
using namespace std;
int main()
{
	// input and output
	int m, v, p;
	cout << "Enter the Mass" << endl;
	cin >> m;
	cout << "Enter the velocity" << endl;
	cin >> v;
	cout << "Momentum=" << m * v << endl;


	// accessing array
	int arr[4];
	cin>>arr[0]; // taking input
	cout<<arr[0]; // giving output

	// accessing char arr as string
	char carr[10];
	cin>>carr;
	cout<<carr;
	cin.getline(carr,10); // get whole line as input

	// accessing string
	string str;
	cin>>str;
	cout<<str;

	getline(cin,str); // get whole line as input
	cout<<str;





}
