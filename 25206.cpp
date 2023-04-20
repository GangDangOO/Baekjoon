#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	float answer = 0;
	float sum = 0;
	
	while(true)
	{
		getline(cin, str);
		if (str == "") break;
		int len = 0;
		while(str[len] != ' ')
		{
			len++;
		}
		len++;
		float f = stof(str.substr(len, 3));
		sum += f;
		len += 4;
		switch(str[len])
		{
			case 'A':
				if (str[len  + 1] == '+')
				{
					f *= 4.5f;
				}
				else if (str[len  + 1] == '0')
				{
					f *= 4.0f;
				}
				break;
			case 'B':
				if (str[len  + 1] == '+')
				{
					f *= 3.5f;
				}
				else if (str[len  + 1] == '0')
				{
					f *= 3.0f;
				}
				break;
			case 'C':
				if (str[len  + 1] == '+')
				{
					f *= 2.5f;
				}
				else if (str[len  + 1] == '0')
				{
					f *= 2.0f;
				}
				break;
			case 'D':
				if (str[len  + 1] == '+')
				{
					f *= 1.5f;
				}
				else if (str[len  + 1] == '0')
				{
					f *= 1.0f;
				}
				break;
			case 'F':
				f = 0.0f;
				break;
			case 'P':
				sum -= f;
				f = 0.0f;
				break;
			default:
				break;
		}
		answer += f;
	}
	cout << answer / sum << endl;
	return 0;
}
