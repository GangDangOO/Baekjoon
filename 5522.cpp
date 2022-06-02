#include <iostream>

using namespace std;

int main() {
	int n, temp = 0;
	
	for (int i = 0; i < 5; i++){
		cin >> n;
		temp += n;
	}
	cout << temp;
	
	return 0;
}
