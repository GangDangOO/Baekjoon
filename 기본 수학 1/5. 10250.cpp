#include <iostream>
#include <math.h>

using namespace std;

int Solution();

int main() {
	int input;
	
	cin >> input;
	for (int i = 0; i < input; i++) cout << Solution() << endl;
	
	return 0;
}

int Solution() {
	int result, h, w, n, room_count;
	
	cin >> h >> w >> n;
	if (n % h == 0) result = h;
	else result = n % h;
	room_count = 1;
	while (true) {
		if (w < 10) break;
		w /= 10;
		room_count++;
	}
	if (w <= 10) result *= 100;
	else result *= pow(10, room_count);
	if (n % h == 0) result += n / h;
	else result += (n / h) + 1;

	return result;
}
