#include <iostream>

using namespace std;

int main() {
	int input, count = 0;
	bool arr[30];
	
	for (int i = 0; i < 30; i++) {
		arr[i] = false;
	}
	for (int i = 0; i < 28; i++) {
		cin >> input;
		arr[input - 1] = true;
	}
	for (int i = 0; i < 30; i++) {
		if (arr[i] == false) {
			cout << i + 1 << endl;
			count++;
			if (count == 2) break;
		}
	}
	return 0;
}
