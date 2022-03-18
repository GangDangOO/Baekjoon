#include <iostream>
#include <string>

using namespace std;

void Solution(string s);

int main() {
	string s;
	
	cin >> s;
	Solution(s);
	
	return 0;
}

void Solution(string s) {
	int out_num;
	for(int i = 97; i <= 122; i++) {
		out_num = -1;
		for(int j = 0; j < s.size(); j++) {
			if(i == s[j]) {
				out_num = j;
				break;
			}
		}
		cout << out_num << ' ';
	}
}
