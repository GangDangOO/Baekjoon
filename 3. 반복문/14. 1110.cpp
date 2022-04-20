#include <iostream>
using namespace std;
int main()
{
	int N;
	int temp;
	int Length = 0;
	cin >> N;
	temp = N;
	while (true)
	{
		if (N < 10 && Length == 0) {
			N = (N * 10) + N;
			Length++;
		}
		else
		{
			N = ((N % 10) * 10) + (((N / 10) + (N % 10)) % 10);
			Length++;
		}
		if (temp == N) {
			cout << Length;
			break;
		}
	}
}