#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t timer = time(NULL);
	
	struct tm* t = localtime(&timer);
	
	cout << t->tm_year + 1900 << '-';
	if (t->tm_mon >= 10) cout << t->tm_mon << '-';
	else cout << 0 << t->tm_mon << '-';
	if (t->tm_mday >= 10) cout << t->tm_mday;
	else cout << 0 << t->tm_mday;
	
	return 0;
}
