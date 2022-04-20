#include <iostream>
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
	int result = 0;
	
	for(int i = 0; i < input.size(); i++) {
		if((input[i] == 'c' && input[i + 1] == '=') && i < input.size() - 1) {
			result++;
			i += 1;
		} else if((input[i] == 'c' && input[i + 1] == '-') && i < input.size() - 1) {
			result++;
			i += 1;
		} else if(((input[i] == 'd' && input[i + 1] == 'z') && input[i + 2] == '=') && i < input.size() - 2) {
			result++;
			i += 2;
		} else if((input[i] == 'd' && input[i + 1] == '-') && i < input.size() - 1) {
			result++;
			i += 1;
		} else if((input[i] == 'l' && input[i + 1] == 'j') && i < input.size() - 1) {
			result++;
			i += 1;
		} else if((input[i] == 'n' && input[i + 1] == 'j') && i < input.size() - 1) {
			result++;
			i += 1;
		} else if((input[i] == 's' && input[i + 1] == '=') && i < input.size() - 1) {
			result++;
			i += 1;
		} else if((input[i] == 'z' && input[i + 1] == '=') && i < input.size() - 1) {
			result++;
			i += 1;
		} else result++;
	}
	
	return result;
}
