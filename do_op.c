#include <unistd.h>
#include <stdlib.h>

void ft_putnbr(int n)
{
    char c;

    if (n >= 10)
        ft_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int a;
    int b;
    int res;

    if (ac == 4)
    {
        a = atoi(av[1]);
        b = atoi(av[3]);

        if (av[2][1] != '\0')
            return (write(1, "\n", 1), 0);

        if (av[2][0] == '+')
            res = a + b;
        else if (av[2][0] == '-')
            res = a - b;
        else if (av[2][0] == '*')
            res = a * b;
        else if (av[2][0] == '/' && b != 0)
            res = a / b;
        else if (av[2][0] == '%' && b != 0)
            res = a % b;
        else
            return (write(1, "\n", 1), 0);

        ft_putnbr(res);
    }
    write(1, "\n", 1);
    return (0);
}