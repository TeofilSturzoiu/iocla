#include <stdio.h>

int main(void)
{
	int v[] = {4, 1, 2, -17, 15, 22, 6, 2};
	int max;
	int i;

	/* TODO: Implement finding the maximum value in the vector */
	max = v[0];
	i = 1;
L1:
	if (i >= sizeof(v) / sizeof(v[0])) {
		goto L2;
	}
	if (max < v[i])
		max = v[i];
	i++;
	goto L1;

L2:
	printf("Elementul maxim din vector este: %d", max);
	(void) i;
	(void) max;
}
