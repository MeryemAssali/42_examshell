int		max(int* tab, unsigned int len)
{
    unsigned int  i;
    int mx;

    i = 0;
    if (len == 0)
    return (0);
    mx = tab[i];
    while (i < len)
    {
        if (mx < tab[i])
            mx = tab[i];
        i++;
    }
    return (mx);
}