#include <iostream>

using namespace std;

int Solution(int a, int b);

int main() {
	int a, b;
	
	cin >> a >> b;
	cout << Solution(a, b);
	
	return 0;
}

int Solution(int a, int b) {
	return a * b - a + 1;
}
