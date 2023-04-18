#include <iostream>

using namespace std;

void Solution(int m, int n);

int main() {
	int m, n;
	
	cin >> m >> n;
	Solution(m, n);
	
	return 0;
}

void Solution(int m, int n) {
	int arr_size = n;
	bool* arr = new bool[arr_size + 1];
	
	for (int i = 2; i <= arr_size; i++) {
		arr[i] = true;
	}
	for (int i = 2; i * i <= arr_size; i++) {
		if (arr[i])
			for (int j = i * i; j <= arr_size; j += i) {
				arr[j] = false;
			}
	}
	
	for (int i = m; i <= arr_size; i++) {
		if (arr[i]) cout << i << '\n';
	}
	
	delete[] arr;
}
