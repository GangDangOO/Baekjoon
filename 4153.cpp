#include <iostream>
#include <string>

using namespace std;

bool Solution(int a, int b, int c);

int main() {
	int a, b, c;
	
	while(true) {
		cin >> a >> b >> c;
		if ((a == 0 && b == 0) && c == 0) break;
		else if(Solution(a, b, c)) cout << "right" << endl;
		else cout << "wrong" << endl;
	}
	
	return 0;
}

bool Solution(int a, int b, int c) {
	bool	b_result;
	
	if ((a * a) + (b * b) == (c * c) ||
		 (a * a) + (c * c) == (b * b) ||
		  (b * b) + (c * c) == (a * a))
		  b_result = true;
		  else b_result = false;
	return	b_result;
}
