#include <stdio.h>

int main(void)
{
	int myint;
	while (1)
	{
		if (myint == 0)
			break;

		printf("n: 0");
		scanf("%i",&myint);

		if (myint % 2 == 0)
		{
			printf("even\n");
		}
		else
		{
			printf("odd\n");
		}
		
	}
	return 0;
}