#include <iostream>
using namespace std;

int main() {
	int count = 0; // ���� �ٸ��� ���� ī��Ʈ
	int temp; // �������� ���� ����
	int arr[43] = { 0, }; // ������������ �����ϰ� �˻��� �迭

	int i = 0;
	while (i != 10) {
		cin >> temp;
		arr[temp % 42] = 1; // ���������� �ε��� �迭�� 1�� �ʱ�ȭ
		i++;
	}
	i = 0;
	while (i != 43) {
		if (arr[i] == 1) count++; // �迭�� ���� 1�� ����Ǿ��ٸ� ī��Ʈ
		i++;
	}
	if (count == 0) count++; // 0�̶�� ��� ���������� 0�̹Ƿ� 1����
	cout << count;
}