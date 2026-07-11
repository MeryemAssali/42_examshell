
# include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
        {
            j = 0;
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                j = av[1][i] - 65;
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                j = av[1][i] - 97;
            while (j >= 0)
            {
                write(1, &av[1][i], 1);
                j--;
            }
            i++;
        }
    }
    write(1,"\n", 1);
}