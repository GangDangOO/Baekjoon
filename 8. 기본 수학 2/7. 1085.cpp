#include <iostream>

using namespace std;

int Solution(int x, int y, int w, int h);

int main() {
	int x, y, w, h;
	
	cin >> x >> y >> w >> h;
	cout << Solution(x, y, w, h);
	
	return 0;
}

int Solution(int x, int y, int w, int h) {
	int result, min;
	
	min = x;
	if (min > y) min = y;
	if (min > w - x) min = w - x;
	if (min > h - y) min = h - y;
	
	result = min;
	
	return result;
}
