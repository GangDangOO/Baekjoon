#include <iostream>

using namespace std;

int Solution(int input);

int main() {
	int input;
	
	cin >> input;
	cout << Solution(input);
	
	return 0;
}

int Solution(int input) {
	if (input <= 1)
		return 1;
	return input * Solution(input - 1);
}
