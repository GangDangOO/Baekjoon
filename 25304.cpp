#include <iostream>

using namespace std;

int main() 
{
	int temp, n, price;
	
	cin >> price >> n;
	
	temp = 0;
	for(int i = 0; i < n; i++)
	{
		int k, m;
		cin >> k >> m;
		temp += k * m;
	}
	
	if (price == temp)
		cout << "Yes";
	else
		cout << "No";
	
	return 0;
}
