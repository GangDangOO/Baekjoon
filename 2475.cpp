#include <iostream>

using namespace std;

int Solution(int input[]);

int main() {
	int input[5];
	
	for (int i = 0; i < 5; i++) {
		cin >> input[i];
	}
	cout << Solution(input);
	return 0;
}

int Solution(int input[]) {
	int result = 0;
	
	for (int i = 0; i < 5; i++) {
		result += input[i] * input[i];
	}
	result %= 10;
	return result;
}
