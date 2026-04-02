#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	gcd;
	int	temp;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);

		int x = a;
		int y = b;

		while (y != 0)
		{
			temp = y;
			y = x % y;
			x = temp;
		}
		gcd = x;

		printf("%d", (a * b) / gcd);
	}
	printf("\n");
	return (0);
}