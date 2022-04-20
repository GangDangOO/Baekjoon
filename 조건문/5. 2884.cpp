#include <iostream>
using namespace std;
int main()
{
	int H;
	int M;
	cin >> H;
	cin >> M;
	if (M < 45) {
		if (H == 0) {
			H = 23;
			M += 15;
		}
		else {
			H--;
			M += 15;
		}
	}
	else M -= 45;
	cout << H << " " << M << endl;
}