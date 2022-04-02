#include <iostream>

using namespace std;

void Solution(int input);

int main() {
	int input;
	
	cin >> input;
	
	Solution(input);
	
	return 0;
}

void Solution(int input) {
	int a = 1;
	int b = 1;
	bool turn = false;
	
	for (int i = 1; i < input; i++) {
		if(!turn) {
			if (a > 1) {
				a--;
				b++;
			} else {
				b++;
			 	turn = !turn;
			}
		} else {
			if (b > 1) {
				b--;
				a++;
			} else {
				a++;
			 	turn = !turn;
			}
		}
	}
	
	cout << a << '/' << b << endl;
}
