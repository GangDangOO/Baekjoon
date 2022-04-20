#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main() {
	int num;
	int array;
	int max = -1000001;
	int min = 1000001;

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &array);

		if (max < array) {
			max = array;
		}
		if (min > array) {
			min = array;
		}
	}
	printf("%d %d", min, max);
}