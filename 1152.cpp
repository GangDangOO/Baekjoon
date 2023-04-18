#include <iostream>
#include <string>

using namespace std;

int Solution(string input);

int main() {
	string input;
	
	getline(cin, input);
	cout << Solution(input);
	
	return 0;
}

int Solution(string input) {
	int result = 0;
	bool b_str = false;
	
	for(int i = 0; i < input.size(); i++) {
		if(input[i] != ' ' && !b_str) {
			result++;
			b_str = true;
		}
		if(input[i] == ' ' && b_str) b_str = false;
	}
	
	return result;
}
