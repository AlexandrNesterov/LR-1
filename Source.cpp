#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[10];
	int razn[9];

	for (int i = 0; i < 10; i++)
	{
		printf("vvedite chislo %d: ", i + 1);
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
		printf("raznost %d: %d - %d = %d\n", i + 1, a[i], a[i + 1], b);
		if (b < 0) {
			b = b * -1;
		}

		if (b < min) {
			min = b;
		}
		razn[i] = b;
	}
	for (int i = 1; i < 9; i++) {
		int k = i;
		while (razn[k - 1] > razn[k] && k > 0) {
			int tmp = razn[k - 1];
			razn[k - 1] = razn[k];
			razn[k] = tmp;
			k = k - 1;
		}

	}
	int mediana = razn[4];

	for (int i = 0; i < 9; i++) {
		
		printf("%d: %d\n",i+1, razn[i]);
	}
	
	printf("mediana: %d\n", mediana);

	printf("min razn %d", min);
	return 0;
