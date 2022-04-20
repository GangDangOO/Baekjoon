#include <iostream>

using namespace std;

int C, number, i;
float avr, result;

int main(){
	cin >> C;
	while(C > 0){
		cin >> number;
		int *arr = new int[number];
		i = avr = result = 0;
		while(i < number){
			cin >> arr[i];
			avr += arr[i];
			i++;
		}
		avr /= number;
		i = 0;
		while(i < number){
			if (arr[i] > avr) result++;
			i++;
		}
		delete[] arr;
		cout << fixed;
		cout.precision(3);
		cout << (result / number * 100) << "%" << endl;
		C--;
	}
	return 0;
}
