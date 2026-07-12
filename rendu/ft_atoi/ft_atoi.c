
int ft_atoi(char *str)
{
    int i;
    int nbr;


    while (str[i])
    {
        nbr = (nbr*10) + (str[i] - '0');
        i++;
    }
    return (nbr);
}

# include <stdio.h>
# include <stdlib.h>

int main (void)
{
    printf("%d\n", atoi("   +-1234   "));
    //printf("%d\n", ft_atoi("   +-1234   "));
}
