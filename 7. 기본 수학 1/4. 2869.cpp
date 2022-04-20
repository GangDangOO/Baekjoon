#include <iostream>

using namespace std;

int Solution(int a, int b, int v);

int main() {
	int a, b ,v;
	
	cin >> a >> b >> v;
	cout << Solution(a, b, v);
	
	return 0;
}

int Solution(int a, int b, int v) {
	int result;
	
	result = (v - b) / (a - b);
	if ((v - b) % (a - b) != 0) result++;
	
	return result;
}
