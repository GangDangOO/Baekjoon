#include <iostream>

using namespace std;

int main()
{
	int a, b, c, mid;
	
	cin >> a >> b >> c;
	
	a > b ? c > a ? cout << a : b > c ? cout << b : cout << c : c > b ? cout << b : a > c ? cout << a : cout << c;
	return 0;
}
