#include<stdio.h>
int main()
{
	int a , i;
	printf("구구단 몇단?");
	scanf_s("%d", &a);

	for (i = 1; i <= 9; i++)
	{
		printf(" % d x % d = % d\n", a, i, a * i);

	}
	return 0;
}