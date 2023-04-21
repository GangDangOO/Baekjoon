#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int x, y;
	int max = -1;
	string temp;
	
	x = 0; y = 0;
	for(int i = 1; i <= 9; i++)
	{
		getline(cin, temp);
		stringstream ss(temp);
		for(int j = 1; j <= 9; j++)
		{
			string s;
			ss >> s;
			int num = stoi(s);
			if(max < num)
			{
				max = num;
				x = j;
				y = i;
			}
		}
	}
	cout << max << endl << y << " " << x;
	return 0;
}
