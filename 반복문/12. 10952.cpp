#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int A, B;
	while (true)
	{
		cin >> A;
		cin >> B;
		if (A == 0 && B == 0) {
			break;
		}
		else {
			cout << A + B << endl;
		}
	}
}