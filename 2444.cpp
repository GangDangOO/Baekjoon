#include <iostream>

using namespace std;

int main()
{
	int n, max, printStarCount;
	
	cin >> n;
	max = 2 * n - 1;
	printStarCount = 1;
	n--;
	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < printStarCount; j++)
		{
			cout << "*";
		}
		cout << endl;
		if (i < max / 2)
		{
			n--; printStarCount += 2;
		}
		else
		{
			n++; printStarCount -= 2;
		}
	}
	
	return 0;
}
