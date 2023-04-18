#include <iostream>
using namespace std;

int main() {
	int Count_subject, Max = 0;
	int Array_subject[1000];
	float result = 0;

	cin >> Count_subject;

	int i = 0;
	while (i != Count_subject) {
		cin >> Array_subject[i];
		if (Array_subject[i] > Max) Max = Array_subject[i];
		i++;
	}
	i = 0;
	while (i != Count_subject) {
		result += ((float)Array_subject[i] / Max) * 100;
		i++;
	}
	cout << result / Count_subject;
}