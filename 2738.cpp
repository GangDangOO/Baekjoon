#include <iostream>

using namespace std;

int main() {
	int n, m;
	
	cin >> n >> m;
	int **arr1, **arr2;
	arr1 = new int*[n];
	arr2 = new int*[n];
	for (int i = 0; i < n; i++) {
		arr1[i] = new int[m];
		arr2[i] = new int[m];
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr1[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr2[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr1[i][j] + arr2[i][j] << ' ';
		}
		cout << endl;
	}
	
	
	for (int i = 0; i < n; i++) {
		delete [] arr1[i];
		delete [] arr2[i];
	}
	delete [] arr1;
	delete [] arr2;
		
	return 0;
}
