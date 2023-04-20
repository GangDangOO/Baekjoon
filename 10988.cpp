#include <iostream>

using namespace std;

bool answer(string str, int len);

int main()
{
	string str;
	
	cin >> str;
	
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	
	cout << answer(str, i);
	
	return 0;
}

bool answer(string str, int len)
{
	int i = 0; len--;
	while(i < len)
	{
		if(str[i] != str[len])
			return false;
		i++; len--;
	}
	return true;
}
