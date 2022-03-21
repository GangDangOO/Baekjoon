#include <iostream>
#include <string>

using namespace std;

void Solution();

int main() {
	int n;
	
	cin >> n;
	for(int i = 0; i < n; i++) {
		Solution();
	}
	
	return 0;
}

void Solution() {
	int input;
	string s;
	
	cin >> input;
	cin >> s;
	for(int i = 0; i < s.length(); i++) {
		for(int j = 0; j < input; j++) {
			cout << s[i];
		}
	}
	cout << endl;
}
