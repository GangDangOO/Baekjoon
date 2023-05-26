#include <iostream>

using namespace std;

int main()
{
	string str;
	
	getline(cin, str);
	while(str != "#")
	{
		int num = 0;
		for(int i = 0; i < str.length(); i++)
		{
			if (str[i] == 'a' || str[i] == 'A' ||
				str[i] == 'e' || str[i] == 'E' ||
				str[i] == 'i' || str[i] == 'I' ||
				str[i] == 'o' || str[i] == 'O' ||
				str[i] == 'u' || str[i] == 'U')
				num++;
		}
		cout << num << endl;
		getline(cin, str);
	}
	
	return 0;
}
