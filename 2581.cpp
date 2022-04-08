#include <iostream>

using namespace std;

void Solution(int m, int n);

int main() {
	int	m, n;
	
	cin >> m >> n;
	Solution(m, n);
	
	return 0;
}

void Solution(int m, int n) {
	bool	b_first	 = false;
	int		first_prime_n, sum = 0;
	
	for (int i = m; i <= n; i++) {
		for (int j = 2; j <= i; j++) {
			if (j != i && i % j == 0) break;
			else if (j == i) {
				sum += i;
				if (!b_first) {
					b_first	= true;
					first_prime_n =	i;
				}
			}
		}
	}
	
	if (sum != 0) {
		cout << sum				<< endl;
		cout << first_prime_n	<< endl;
	} else {
		sum--;
		cout << sum << endl;
	}
}
