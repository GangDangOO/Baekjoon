#include <iostream>
#include <string>

using namespace std;

int Solution(int n, string input);

int main(){
	int n;
	string input;
	
	cin >> n;
	cin >> input;
	cout << Solution(n, input);
	
	return 0;
}

int Solution(int n, string input) {
	int sum = 0;
	for(int i = n - 1; i >= 0; i--) {
		sum += (int)input[i] - 48;
	}
	
	return sum;
}
