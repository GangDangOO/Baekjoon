#include <iostream>

using namespace std;

void Solution(int input);

int main() {
	int input;
	
	cin >> input;
	Solution(input);
	
	return 0;
}

void Solution(int input) {
	if (input == 1) return;
	for (int i = 2; i <= input; i++) {
		if (input % i == 0) {
			cout << i << endl;
			input /= i;
			i = 1;
		} else if (input == 1) break;
	}
}
