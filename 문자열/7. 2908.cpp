#include <iostream>

using namespace std;

int Solution(int input_a, int input_b);

int main() {
	int input_a, input_b;
	
	cin >> input_a;
	cin >> input_b;
	
	cout << Solution(input_a, input_b);
	
	return 0;
}

int Solution(int input_a, int input_b) {
	int answer = 0;
	int a, b, temp = 0;
	
	a = input_a;
	b = input_b;
	for(int i = 0; i < 3; i++) {
		if(a % 10 > b % 10) {
			temp = input_a;
			break;
		}
		else if (a % 10 < b % 10) {
			temp = input_b;
			break;
		}
		else {
			a /= 10;
			b /= 10;
		}
	}
	answer += (temp % 10) * 100;
	temp /= 10;
	answer += (temp % 10) * 10;
	temp /= 10;
	answer += temp;
	
	return answer;
}
