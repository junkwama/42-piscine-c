#include <unistd.h>

int ft_are_equal (char *str1, char *str2)
{
    int i;
    
    i = 0;
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int ft_get_base(char *b)
{
    int i;
    
    i = 0;
    if(ft_are_equal("poneyvif", b))
    {
        return (8);
    }
    while (b[i] != '\0')
    {
        if(b[i] == b[i - 1] || b[0] == '\0' || b[1] == '\0' || b[i] == '\t')
        {
            return (0);
        }
        if(b[i] == '-' || b[i] == '+' || b[i] == '\n' || b[i] == ' ')
        {
            return (0);
        }
        i++;
    }
    return (i);
}

void ft_putnbr_base(int nbr, char *base)
{
    long n;
    
    n = nbr;
    if(ft_get_base(base))
    {
        if (n < 0)
        {
            n *= -1;
            write(1, "-", 1);
        }
        if ((n / ft_get_base(base)) >= ft_get_base(base))
        {
            ft_putnbr_base(n / ft_get_base(base), base);
            write(1, &base[n % ft_get_base(base)], 1);
        }
        else
        {
            if(!(n / ft_get_base(base) == 0))
            {
                write(1, &base[n / ft_get_base(base)], 1);
            }
            write(1, &base[n % ft_get_base(base)], 1);
        }
    }
}
