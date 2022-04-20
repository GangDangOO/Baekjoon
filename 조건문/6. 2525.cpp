#include <iostream>

using namespace std;

int main() {
	int h, m, delay_m;
	cin >> h;
	cin >> m;
	cin >> delay_m;
	
	m += delay_m;
	while(m >= 60){
		m -= 60;
		h++;
	}
	if(h >= 24) {
		h -= 24;
	}
	cout << h << " " << m;
	return 0;
}
