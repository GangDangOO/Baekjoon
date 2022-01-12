#include <iostream>
using namespace std;

int i, n, len, sum, result;
char c[80] = { '\0', };

int strlen(char c[]) {
	while (c[i] != '\0') i++;

	return i;
}

int main() {
	cin >> n;
	while (n != 0) {
		cin >> c;
		len = strlen(c);
		i = sum = result = 0;
		while (i != len) {
			if (c[i] == 'O') {
				sum++;
				result += sum;
			}
			else if (c[i] == 'X') {
				sum = 0;
			}
			else {
				break;
			}
			i++;
		}
		n--;
		cout << result << endl;
	}

	return 0;
}