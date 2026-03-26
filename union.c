#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int used[256] = {0};

    if (ac == 3)
    {
        for (i = 0; av[1][i]; i++)
            if (!used[(unsigned char)av[1][i]])
            {
                write(1, &av[1][i], 1);
                used[(unsigned char)av[1][i]] = 1;
            }

        for (i = 0; av[2][i]; i++)
            if (!used[(unsigned char)av[2][i]])
            {
                write(1, &av[2][i], 1);
                used[(unsigned char)av[2][i]] = 1;
            }
    }
    write(1, "\n", 1);
}