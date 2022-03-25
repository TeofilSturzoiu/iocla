#include <stdio.h>

int main(void)
{
	int v[] =  {1, 2, 15, 51, 53, 66, 202, 7000};
	int dest = v[2]; /* 15 */
	int start = 0;
	int end = sizeof(v) / sizeof(int) - 1;
	
	/* TODO: Implement binary search */
	int middle;
L3:
	middle = (start + end) / 2;
	if (dest == v[middle]) {
		goto L1;
	}
	if (dest > v[middle]) {
		start = middle;
		goto L3;
	}
	if (dest < v[middle]) {
		end = middle;
		goto L3;
	}
	(void) dest;
	(void) start;
	(void) end;

L1:
	printf("Elementul a fost gasit");
	return 0;
L2:
	printf("Elementul NU a fost gasit");
	return 0;
}
