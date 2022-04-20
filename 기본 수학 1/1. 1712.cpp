#include <iostream>

using namespace std;

int Solution (int a, int b, int c);

int main() {
	int a, b, c;
	
	cin >> a;
	cin >> b;
	cin >> c;
	cout << Solution(a, b, c);
	
	return 0;
}

int Solution (int a, int b, int c) {
	int result;
	
	if (b >= c) result = -1;
	else if (a != 0 && c - b != 0) result = (a / (c - b)) + 1;
	else result = 1;
	
	return result;
}
