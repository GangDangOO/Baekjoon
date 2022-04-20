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
		if (cin.eof() == true) break;
		cout << A + B << "\n";
	}
}
