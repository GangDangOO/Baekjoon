#include <iostream>

using namespace std;

int Solution(int input);

int main() {
	int input;
	cin >> input;
	
	cout << Solution(input);
	
	return 0;
}

int Solution(int input) {
	int result = 0;
	for(int i = 1; i <= input; i++) {
		bool b = false;
		if(i < 100) result++;
		else {
			int temp = i;
			int n;
			n = (temp % 10) - (temp / 10) % 10; // 210 0 1 -1
			temp /= 10; // 21
			while(true) {
				if((temp / 10) % 10 + n == temp % 10) {
					b = true;
					temp /= 10;
					if(temp < 10) break;
				} else {
					b = false;
					break;
				}
			}
			if(b) result++;
		}
	}
	
	return result;
}
