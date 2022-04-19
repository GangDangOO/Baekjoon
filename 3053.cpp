#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

void Solution(int input);

int main() {
	int input;
	
	cin >> input;
	Solution(input);
	
	return 0;
}

void Solution(int input) {
	double n1, n2;
	
	n1 = input * input * M_PI;
	n2 = input * input * 2;
	cout << fixed;
	cout.precision(6);
	cout << n1 << endl;
	cout << n2 << endl;
}
