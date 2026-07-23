# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        if (av[2][0] == '*')
            printf("%i\n", atoi(av[1]) * atoi(av[3]));
        else if (av[2][0] == '/')
            printf("%i\n", atoi(av[1]) / atoi(av[3]));
        else if (av[2][0] == '%')
            printf("%i\n", atoi(av[1]) % atoi(av[3]));
        else if (av[2][0] == '+')
            printf("%i\n", atoi(av[1]) + atoi(av[3]));
        else if (av[2][0] == '-')
            printf("%i\n", atoi(av[1]) - atoi(av[3]));
    }
    else
        write(1, "\n", 1);
}