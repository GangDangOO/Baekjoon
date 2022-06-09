#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if ((int)s[i] < 95) {
			s[i] += 32;
		} else {
			s[i] -= 32;
		}
	}
	cout << s << endl;
	return 0;
}
