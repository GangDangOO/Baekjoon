#include <iostream>

using namespace std;

int main()
{
	int arr[101];
	int n, m;
	
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++)
	{
		arr[i] = 0;
	}
	
	for(int x = 1; x <= m; x++)
	{
		int i, j, k;
		cin >> i >> j >> k;
		for(int z = i; z <= j; z++)
		{
			arr[z] = k;
		}
	}
	
	for(int i = 1; i <= n; i++)
	{
		cout << arr[i];
		if (i < n)
			cout << ' ';
	}
	
	return 0;
}
