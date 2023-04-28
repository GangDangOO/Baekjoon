#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	while(n != 0)
	{
		int answer = 0;
		for(int i = 1; i <= n; i++)
		{
			answer += i;
		}
		cout << answer << endl;
		cin >> n;
	}
	
	return 0;
}
