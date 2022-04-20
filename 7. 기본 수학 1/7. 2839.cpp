#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int input;
	int answer = 0;

	scanf("%d", &input);

	while (input > 0) {
		if (input % 5 == 0) {
			input -= 5;
			answer++;
		}
		else if (input % 3 == 0) {
			input -= 3;
			answer++;
		}
		else if (input > 5) {
			input -= 5;
			answer++;
		}
		else {
			answer = -1;
			break;
		}
	}
	printf("%d", answer);
}