#include <iostream>

using namespace std;

int main()
{
	int n, s;
	
	while(cin >> n >> s)
	{
		cout << s / ++n << endl;
	}
	
	return 0;
}
