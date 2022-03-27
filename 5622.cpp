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
		result++;
		if(input[i] == 'A' || input[i] == 'B' || input[i] == 'C') result += 2;
		else if(input[i] == 'D' || input[i] == 'E' || input[i] == 'F') result += 3;
		else if(input[i] == 'G' || input[i] == 'H' || input[i] == 'I') result += 4;
		else if(input[i] == 'J' || input[i] == 'K' || input[i] == 'L') result += 5;
		else if(input[i] == 'M' || input[i] == 'N' || input[i] == 'O') result += 6;
		else if(input[i] == 'P' || input[i] == 'Q' || input[i] == 'R'|| input[i] == 'S') result += 7;
		else if(input[i] == 'T' || input[i] == 'U' || input[i] == 'V') result += 8;
		else if(input[i] == 'W' || input[i] == 'X' || input[i] == 'Y'|| input[i] == 'Z') result += 9;
	}
	
	return result;
}
