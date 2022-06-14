#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		cout << input[0] << input[input.length() - 1] << endl;
	}
	
	return 0;
}
