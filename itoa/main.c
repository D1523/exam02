#include <stdio.h>

char	*ft_itoa(int nbr);

int	main(void)
{
	char *s;

	s = ft_itoa(42);
	printf("%s\n", s);

	s = ft_itoa(-42);
	printf("%s\n", s);

	s = ft_itoa(0);
	printf("%s\n", s);

	s = ft_itoa(2147483647);
	printf("%s\n", s);

	s = ft_itoa(-2147483648);
	printf("%s\n", s);

	return (0);
}