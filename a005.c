#include<stdio.h>
int main(void) {
	int t, i;
	int a[4];

	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
		if (a[1] - a[0] == a[2] - a[1]&& a[2] - a[1] == a[3] - a[2])
		{
			printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], 2 * a[3] - a[2]);
		}
		else if (a[1] / a[0] == a[2] / a[1]&& a[2] / a[1] == a[3] / a[2])
		{
			printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[3] * (a[3] / a[2]));
		}
	}
	return 0;
}