#include <iostream>

using namespace std;

void Solution();

int main() {
	
	Solution();
	
	return 0;
}

void Solution() {
	int n1, n2;
	
	cin >> n1 >> n2;
	for (int i = 0; i < 5; i++) {
		int temp;
		cin >> temp;
		cout << temp - (n1 * n2) << ' ';
	}
}
