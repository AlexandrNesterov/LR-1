#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[10];

	for (int i = 0; i < 10; i++)
	{
		printf("%d: ", i + 1);
		scanf("%d", &a[i]);

	}

	int  min = 0;
	min = a[0] - a[1];
	if (min < 0) {
		min = min * -1;
	}
	for (int i = 0; i < 9; i++)
	{
		int b = a[i] - a[i + 1];
		printf("%d: %d - %d = %d\n", i + 1, a[i], a[i + 1], b);
		if (b < 0) {
			b = b * -1;
		}

		if (b < min) {
			min = b;
		}
	}

	printf("min razn %d", min);
	return 0;
}
