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
	int result = 1;
	int temp = 1;
	
	if (input == 1) return result;
	while (true) {
		temp += 6 * result;
		result++;
		if (input <= temp) break;
	}
	
	return result;
}
