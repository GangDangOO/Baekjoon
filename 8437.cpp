#include <iostream>

using namespace std;

int main()
{
	long long i, j, k, n;
	
	cin >> i >> j;
	k = n = i / 2;
	if (i % 2 != 0) k++;
	k += j / 2;
	n -= j / 2;
	if (j % 2 != 0) k++;

	cout << k << endl;
	cout << n << endl;
	
	return 0;
}
