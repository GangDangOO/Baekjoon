#include <iostream>

using namespace std;

void Solution();

int main() {
	Solution();
	
	return 0;
}

void Solution() {
	int t;
	long long x1, y1, x2, y2, r1, r2, sum, sub, dir;
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		
		if (r1 > r2) swap(r1, r2);
		sum = r1 + r2;
		sum *= sum;
		sub = r2 - r1;
		sub *= sub;
		dir = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		
		if (dir < sum && dir > sub) cout << 2 << endl;
		else if (dir == sum || (dir == sub && dir != 0)) cout << 1 << endl;
		else if (dir < sub || dir > sum) cout << 0 << endl;
		else if (dir == 0) {
			if (r1 == r2) cout << -1 << endl;
			else cout << 0 << endl;
		}
	}
}
