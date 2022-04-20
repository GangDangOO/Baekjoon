#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main() {
	int array[9];
	int max = '\0';
	int answer;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &array[i]);
		if (max < array[i]) {
			max = array[i];
			answer = i + 1;
		}
	}

	printf("%d\n%d", max, answer);
}