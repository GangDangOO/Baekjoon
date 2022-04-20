#include <iostream>
using namespace std;
int main()
{
	int TestCase;
	int A, B;
	cin >> TestCase;
	for (int i = 0; i < TestCase; i++) {
		cin >> A;
		cin >> B;
		cout << A + B << endl;
	}
}