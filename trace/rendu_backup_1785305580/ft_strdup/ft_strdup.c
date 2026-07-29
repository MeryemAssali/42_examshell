# include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *dst;
    size_t i;

    i = 0;
    while (src[i])
        i++;
    dst = malloc (i+1);
    if (!dst)
        return(NULL);
    i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}