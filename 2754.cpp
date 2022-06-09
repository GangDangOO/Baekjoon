#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	
	cin >> s;
	cout << fixed;
	cout.precision(1);
	if (s == "A+") cout << 4.3f << endl;
	if (s == "A0") cout << 4.0f << endl;
	if (s == "A-") cout << 3.7f << endl;
	if (s == "B+") cout << 3.3f << endl;
	if (s == "B0") cout << 3.0f << endl;
	if (s == "B-") cout << 2.7f << endl;
	if (s == "C+") cout << 2.3f << endl;
	if (s == "C0") cout << 2.0f << endl;
	if (s == "C-") cout << 1.7f << endl;
	if (s == "D+") cout << 1.3f << endl;
	if (s == "D0") cout << 1.0f << endl;
	if (s == "D-") cout << 0.7f << endl;
	if (s == "F")  cout << 0.0f << endl;
	return 0;
}
