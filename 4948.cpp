#include <iostream>

using namespace std;

void Solution();

int main() {
	Solution();
	
	return 0;
}

void Solution() {
	int result, input;
	
	cin >> input;
	while (input != 0) {
		int arr_size = input * 2;
		bool* arr = new bool[arr_size + 1];
		result = 0;
		for (int i = 1; i <= arr_size; i++) {
			arr[i] = true;
		}
		for (int i = 2; i * i <= arr_size; i++) {
			if (arr[i]) {
				for (int j = i * i; j <= arr_size; j += i) {
					arr[j] = false;
				}
			}
		}
		for (int i = input + 1; i <= arr_size; i++) {
			if (arr[i]) {
				result++;
			}
		}
		cout << result << '\n';
		delete[] arr;
		cin >> input;
	}
}
