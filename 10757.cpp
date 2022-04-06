#include <iostream>
#include <string>

using namespace std;

string To_String(char c);
string Solution(string a, string b);

enum {
	_0 = 48,
	_1,
	_2,
	_3,
	_4,
	_5,
	_6,
	_7,
	_8,
	_9,
	_10
};

int main() {
	string a, b;
	
	cin >> a >> b;
	cout << Solution(a, b) << endl;
	
	return 0;
}

string To_String(char c) {
	string result;
	
	result += c;
	
	return result;
}

string Solution(string a, string b) {
	int strlen, a_len, b_len;
	string result, reverse;
	char temp;
	
	a_len = a.size();
	b_len = b.size();
	if (a_len >= b_len){
	 	strlen = a_len;
		for (int i = 0; i < a_len - b_len; i++) {
			temp = _0;
			b.insert(0, To_String(temp));
		}
	}
	else {
	 	strlen = b_len;
		for (int i = 0; i < b_len - a_len; i++) {
			temp = '\0';
			a.insert(0, To_String(temp));
		}
	}
	for (int i = strlen; i >= 0; i--) {
		if (a_len < 0 && b_len >= 0) {
			temp = b[b_len];
			reverse.append(To_String(temp));
		} else if (a_len >= 0 && b_len < 0) {
			temp = a[a_len];
			reverse.append(To_String(temp));
		} else {
			temp = a[a_len] + b[b_len] - _0;
			if (temp >= _10) {
				temp -= 10;
				reverse.append(To_String(temp));
				if (a.size() - (a_len + 1) >= 0) {
					if (a[a_len - 1] == '\0') {
						a[a_len - 1] = _1;
					} else {
						a[a_len - 1]++;
					}
				} else {
					temp = _1;
					reverse.append(To_String(temp));
				}
			} else reverse.append(To_String(temp));
		}
		
		a_len--;
		b_len--;
	}
	
	if (reverse[strlen + 1] != '\0') strlen++;
	for (int i = strlen; i >= 0; i--) {
		temp = reverse[i];
		result.append(To_String(temp));
	}
	return result;
}

//18446744073709551615
// 9223372036854775808
// 9223372036854775807
