#include <iostream>

using namespace std;

int main() {
	long long a, b, answer;
	
	cin >> a >> b;
	if (a < b) {
		answer = b - a;
	} else {
		answer = a - b;
	}
	cout << answer << endl;
	
	return 0;
}
// -2000000000 2000000000
// 2000000000 -2000000000
