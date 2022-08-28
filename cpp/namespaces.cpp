#include <iostream>
using namespace std;
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
}