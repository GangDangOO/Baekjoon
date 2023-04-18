#include <iostream>
#include <string>

using namespace std;

char Solution(string input);

int main() {
	string input;
	cin >> input;
	
	cout << Solution(input);
	
	return 0;
}

char Solution(string input) {
	int alphabet_arr[26] = { 0, };
	int max = 0;
	char result;
	
	for(int i = 0; i < input.size(); i++) {
		if(input[i] < 91) {
			alphabet_arr[input[i] - 65]++;
		} else {
			alphabet_arr[input[i] - 97]++;
		}
	}
	for(int i = 0; i < 26; i++) {
		if(max < alphabet_arr[i]) {
			max = alphabet_arr[i];
			result = i + 65;
		}
	}
	for(int i = 0; i < 26; i++) {
		if((max == alphabet_arr[i] && result != i + 65) &&
			(max == alphabet_arr[i] && result != i + 97)) {
			result = '?';
			break;
		}
	}
	return result;
}
