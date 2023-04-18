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
	
	for(int i = 0; i < m; i++)
	{
		int j, k, temp;
		cin >> j >> k;
		while(j < k)
		{
			temp = arr[j];
			arr[j] = arr[k];
			arr[k] = temp;
			j++; k--;
		}
	}
	
	for(int i = 1; i <= n; i++)
	{
		cout << arr[i] << ' ';
	}
	
	return 0;
}
