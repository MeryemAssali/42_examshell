
unsigned int cgd(unsigned int n1, unsigned int n2)
{
    int tmp;

    while (n2)
    {
        tmp = n2;
        n2 = n1 % n2;
        n1 = tmp;
    }
    return (n1);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int lcm;

    if (!a || !b)
        return (0);
    return (a * b / cgd(a, b));
}