
# include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int nbr;

    nbr = 0;
    sign = 1;
    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
        nbr = (nbr*10) + (str[i++] - '0');
    return (nbr*sign);
}

void ft_putnbr(int n)
{
    char c;

    if (n > 9)
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write (1, &c, 1);
}

int is_prime(int n)
{
    int i;

    i = 2;
    while (i*i <= n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    int i;
    int n;
    int sum;

    if (ac == 2)
    {
        n = ft_atoi(av[1]);
        if (n > 0)
        {
            sum = 0;
            i = 2;
            while(i <= n)
            {
                if (is_prime(i))
                    sum += i;
                i++;
            }
            ft_putnbr(sum);
        }
        else
            write(1, "0", 1);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}