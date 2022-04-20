#include <iostream>
using namespace std;
int main()
{
	int n;
	int temp = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		temp += i;
	}
	cout << temp << endl;
}