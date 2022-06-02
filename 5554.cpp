#include <iostream>

using namespace std;

int main() {
	int t, temp = 0;
	for (int i = 0; i < 4; i++){
		cin >> t;
		temp += t;
	}
	cout << temp / 60 << endl;
	cout << temp % 60 << endl;
	
	return 0;
}
