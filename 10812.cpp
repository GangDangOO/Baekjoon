#include <iostream>

using namespace std;

int main()
{
	int arr[101];
	int n, m;
	
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++)
	{
		arr[i] = i;
	}
	
	for(int x = 0; x < m; x++)
	{
		int i, j, k;
		cin >> i >> j >> k;
		int *temp = new int[k - i];
		for(int y = 0; y < k - i; y++)
		{
			temp[y] = arr[i + y];
		}
		for(int y = k; y <= j; y++)
		{
			arr[i + y - k] = arr[y];
		}
		for(int y = 0; y < k - i; y++)
		{
			arr[i + j - k + 1 + y] = temp[y];
		}
		delete[] temp;
	}
	
	for(int i = 1; i <= n; i++)
	{
		cout << arr[i] << " ";
	}
	
	return 0;
}
