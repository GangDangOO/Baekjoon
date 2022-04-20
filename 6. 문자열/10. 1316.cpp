#include <iostream>
#include <string>

using namespace std;

bool Solution(string str);

int	main() {
	int		num;
	int		result = 0;
	string	str;
	
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> str;
		result += Solution(str);
	}
	cout << result;
	
	return 0;
}

bool Solution(string str) {
	bool b_continuity = true;
	char temp;
	for (int i = 0; i < str.size(); i++) {
		temp = str[i];
		b_continuity = true;
		for (int j = i; j < str.size(); j++) {
			if (temp != str[j] && b_continuity == true) b_continuity = false;
			if (temp == str[j] && b_continuity == false) return false;
		}
	}
	
	return true;
}
