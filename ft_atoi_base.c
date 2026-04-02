#include <stdio.h>

int get_val(char c)
{
    if (c >= '0' && c <= '9') return (c - '0');
    if (c >= 'a' && c <= 'f') return (c - 'a' + 10);
    if (c >= 'A' && c <= 'F') return (c - 'A' + 10);
    return (-1);
}

int ft_atoi_base(const char *s, int b)
{
    int i = 0, sign = 1, val, res = 0;

    if (b < 2 || b > 16) return 0;
    while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)) i++;
    if (s[i] == '-' || s[i] == '+') sign = (s[i++] == '-') ? -1 : 1;
    for (; (val = get_val(s[i])) >= 0 && val < b; i++)
        res = res * b + val;
    return res * sign;
}

int main(void)
{
    printf("%d\n", ft_atoi_base("1a", 16));     // 26
    printf("%d\n", ft_atoi_base("101", 2));     // 5
    printf("%d\n", ft_atoi_base("-ff", 16));    // -255
    printf("%d\n", ft_atoi_base("42", 10));     // 42
    return 0;
}