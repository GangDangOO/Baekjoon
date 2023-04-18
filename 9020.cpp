#include <iostream>

using namespace std;

void Solution();

int main () {
	Solution();
	
	return 0;
}

void Solution() {
	int		n, t;
	bool*	arr = new bool[10001];
	
	for (int i = 2; i < 10001; i++) {
		arr[i] = true;
	}
	
	for (int i = 2; i * i < 10001; i++) {
		if (arr[i])
		for (int j = i * i; j < 10001; j += i) {
			arr[j] = false;
		}
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		int tempL = 0;
		int tempU = 0;
		int l = t / 2;
		int u = t / 2;
		while (true) {
			if (arr[l]) tempL = l;
			else if (tempL == 0) l--;
			if (arr[u]) tempU = u;
			else if (tempU == 0) u++;
			if (tempL != 0 && tempU != 0) {
				if (tempL + tempU == t) break;
				else {
					if (tempL + tempU > t) l--;
					if (tempL + tempU < t) u += 2;
				}
			}
		}
		cout << tempL << ' ' << tempU << endl;
	}
	
	delete[] arr;
}
