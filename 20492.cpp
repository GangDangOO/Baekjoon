#include <iostream>

using namespace std;

int main()
{
	int input, n1, n2;
	
	cin >> input;
	
	n1 = input * 0.01f * 78;
	n2 = input - (input * 0.2f * 0.22f);
	
	cout << n1 << ' ' << n2;
	
	return 0;
}
