#include <iostream>
using namespace std;

char initial = 'r';
namespace space1
{
	int a = 10;
}

namespace space2
{
	int a = 99;
}

int main()
{
	cout << space1::a << '\n'; // this will print 10
	cout << space2::a << '\n'; // this will print 99
	cout << ::initial << '\n'; // using global scope resolution
}