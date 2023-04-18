#include <iostream>

using namespace std;

int main()
{
	int arr[100];
	int n, v, answer = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> v;
	for(int i = 0; i < n; i++)
	{
		if (arr[i] == v) answer++;
	}
	cout << answer << endl;
	return 0;
}
