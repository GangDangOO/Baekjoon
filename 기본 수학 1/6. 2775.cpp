#include <iostream>

using namespace std;

int Solution(int k, int n);

int main() {
	int t, k, n;
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << Solution(k, n) << endl;
	}
	
	return 0;
}

int Solution(int k, int n) {
	int result;
	int arr[15][15] = {0, };
	
	for (int i = 0; i < 15; i++) arr[0][i] = i;
	for (int i = 1; i < 15; i++) for (int j = 1; j < 15; j++) arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
	result = arr[k][n];

	return result;
}
