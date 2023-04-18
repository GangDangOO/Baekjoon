#include <iostream>
using namespace std;
int main()
{
	int Point;
	cin >> Point;
	if (Point >= 90) {
		cout << "A" << endl;
	}
	else if (Point >= 80 && Point <= 89) {
		cout << "B" << endl;
	}
	else if (Point >= 70 && Point <= 79) {
		cout << "C" << endl;
	}
	else if (Point >= 60 && Point <= 69) {
		cout << "D" << endl;
	}
	else cout << "F" << endl;
}