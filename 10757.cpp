#include <iostream>
#include <string>

using namespace std;

string Solution(string a, string b);

enum {
	'n_0' = 48,
	'n_1',
	'n_2',
	'n_3',
	'n_4',
	'n_5',
	'n_6',
	'n_7',
	'n_8',
	'n_9',
	'n_10'
};

int main() {
	string a, b;
	
	cin >> a >> b;
	cout << Solution(a, b);
	
	return 0;
}

string Solution(string a, string b) {
	int strlen;
	string result, temp, reverse;
	
	if (a.size() >= b.size()) strlen = a.size();
	else strlen = b.size();
	for (int i = strlen; i > 0; i++) {
		if (a[i] + b[i] - 96 > 9) {
			
		} else {
			if (a[i - 1] == '')
		}
	}
	
	for (int i = strlen + 1; i > 0; i++) {
		result.append(reverse[i]);
	}

	return result;
}

//18446744073709551615
// 9223372036854775808
// 9223372036854775807
