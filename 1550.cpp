#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int Solution(string input);

int main() {
	string input;
	
	cin >> input;
	cout << Solution(input);
	return 0;
}

int Solution(string input) {
	int result;
	char* c = new char[input.size()];
	for (int i = 0; i < input.size(); i++) {
		c[i] = input[i];
	}
	result = strtol(c, NULL, 16);
	delete[] c;
	return result;
}
