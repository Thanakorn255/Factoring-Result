#include<stdio.h>
int main()
{
	int num, p = 2;
	printf("Enter number : ");
	scanf_s("%d", &num);
	printf("Factoring Result : ");
	while ((num > 1) && (p < num))
	{
		if (num % p == 0)
		{
			printf("%d x ", p);num = num / p;p = 2;
		}
		else p = p + 1;
	}
	printf("%d\n", p);
	return 0;
}