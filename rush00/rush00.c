#include "ft_putchar.c"
 

void ft_draw_sqr(int a, int b)
{
    int i ; //i -> b = rows
    int j; // j -> a = columns

    i = 0;

    while(i < b)
    {
        j = 0;
        while (j < a)
        {
            ft_putchar('A');
            
            if(j == (a - 1))
            {
                ft_putchar('\n');
            }
            
            j++;
        }
        i++;
    }
}

int main()
{
    ft_draw_sqr(5, 3);
    return (0);
}