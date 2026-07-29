unsigned char	reverse_bits(unsigned char octet)
{
    int i;
    unsigned char bit;
    unsigned char result;

    i = 0;
    bit = 0;
    result = 0;
    while (i < 8)
    {
        bit = (octet >> i) & 1;
        result = result | (bit << (7 - i));
        i++;
    }
    return (result);
}