#include <iostream>

using namespace std;

void Solution();

int main () {
	Solution();
	
	return 0;
}

void Solution() {
	int		n, t;
	bool	arr = new bool[10001];
	
	for (int i = 1; i < 10001; i++) {
		arr[i] = true;
	}
	
	for (int i = 2; i * i < 10001; i++) {
		if (arr[i])
		for (int j = i * i; j < 10001; j += i) {
			arr[j] = false;
		}
	}
	
	for (int i = 0 i < n; i++) {
		cin >> t;
		
	}
	
	delete[] arr;
}
