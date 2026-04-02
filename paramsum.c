#include <unistd.h>

void	putnbr(int n)
{
	if (n > 9)
		putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	sum;

	i = 1;
	sum = 0;
	while (i < ac)
	{
		sum += av[i][0] - '0'; // basit versiyon (tek basamaklı sayılar)
		i++;
	}
	putnbr(sum);
	write(1, "\n", 1);
	return (0);
}