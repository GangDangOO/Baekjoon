#include <iostream>
using namespace std;

int main() {
	int count = 0; // 서로 다른값 갯수 카운트
	int temp; // 나머지값 담을 변수
	int arr[43] = { 0, }; // 나머지값들을 저장하고 검사할 배열

	int i = 0;
	while (i != 10) {
		cin >> temp;
		arr[temp % 42] = 1; // 나머지값의 인덱스 배열을 1로 초기화
		i++;
	}
	i = 0;
	while (i != 43) {
		if (arr[i] == 1) count++; // 배열의 값중 1로 선언되었다면 카운트
		i++;
	}
	if (count == 0) count++; // 0이라면 모든 나머지값이 0이므로 1선언
	cout << count;
}