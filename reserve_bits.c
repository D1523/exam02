#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result = 0;
    int i = 8;

    while (i--)
    {
        result = (result << 1) | (octet & 1);
        octet >>= 1;
    }
    return result;
}

void print_bits(unsigned char octet)
{
    int i = 8;

    while (i--)
    {
        if ((octet >> i) & 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
}

int main(void)
{
    unsigned char c = 65; // 'A' = 01000001

    print_bits(c);
    write(1, "\n", 1);

    c = reverse_bits(c);

    print_bits(c);
    write(1, "\n", 1);

    return 0;
}