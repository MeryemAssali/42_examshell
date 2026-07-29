# include <unistd.h>

int is_match(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int already_seen(char *str, char c, int i)
{
    int j;

    j = 0;
    while (j < i)
    {
        if (str[j] == c)
            return (1);
        j++;
    }
    return (0);
}

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            if (!already_seen(av[1], av[1][i], i) && is_match(av[2], av[1][i]))
                    write (1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}