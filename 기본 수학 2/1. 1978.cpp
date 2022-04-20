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
	int result = 0;
	int num;
	for (int i = 0; i < input; i++) {
		cin >> num;
		for (int j = 1; j <= num; j++) {
			if ((j != num && j != 1) && num % j == 0) break;
			if (j != 1 && j == num) result++;
		}
	}
	
	return result;
}
