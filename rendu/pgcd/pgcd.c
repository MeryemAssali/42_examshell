
# include <stdio.h>
# include <stdlib.h>

int main (int ac, char **av)
{
    int n1;
    int n2;
    int tmp;

    if (ac == 3)
    {
        n1 = atoi(av[1]);
        n2 = atoi(av[2]);
        while (n2)
        {
            tmp = n2;
            n2 = n1 % n2;
            n1 = tmp;
        }
        printf("%d", n1);
    }
    printf("\n");
}