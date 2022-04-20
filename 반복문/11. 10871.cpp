#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, A, X;
	cin >> N;
	cin >> X;
	for (int i = 0; i < N; i++) {
		cin >> A;
		if (A < X) {
			cout << A << "\n";
		}
	}
}