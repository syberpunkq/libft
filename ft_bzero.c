#include <string.h>

void ft_bzero(void *s , size_t n)
{
    size_t i;
    unsigned char *buf;

    i = 0;
    buf = s;

    while(i < n)
        buf[i++] = 0;
}
