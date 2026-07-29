# include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 3)
    {
        i = 0;
        j = 0;
        while (av[2][j])
        {
            if (av[1][i] == av[2][j])
                i++;
            j++;
        }
        if (!av[1][i])
            write (1, av[1], ft_strlen(av[1]));
    }
    write (1, "\n", 1);
}