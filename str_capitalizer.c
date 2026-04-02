#include <unistd.h>

void    str_capitalizer(char *s)
{
    int    i;

    i = 0;
    while (s[i])
    {
        // önce küçült
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;

        // kelime başı ise büyüt
        if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t')
            && (s[i] >= 'a' && s[i] <= 'z'))
            s[i] -= 32;

        write(1, &s[i], 1);
        i++;
    }
}

int    main(int ac, char **av)
{
    int    i;

    if (ac < 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < ac)
        {
            str_capitalizer(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}
