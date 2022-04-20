#include <iostream>

using namespace std;

void Solution();

int main() {
	Solution();
	
	return 0;
}

void Solution() {
	int x, y;
	int arr[4][2];
	for (int i = 0; i < 3; i++) {
		cin >> x >> y;
		arr[i][0] = x;
		arr[i][1] = y;
	}
	
	for (int i = 0; i < 2; i++) {	
		if (arr[0][i] == arr[1][i]) arr[3][i] = arr[2][i];
		else if (arr[1][i] == arr[2][i]) arr[3][i] = arr[0][i];
		else if (arr[0][i] == arr[2][i]) arr[3][i] = arr[1][i];
	}
	cout << arr[3][0] << ' ' << arr[3][1] << endl;
}
