#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb()
{
	int n;
	int i;
	int j;
	int k;

	int is_first_line = 1;

	n = 48;
	i = 0;
	j = 0;
	k = 0;
	
	while (i < 10)
	{
	    j=0;
		while (j < 10)
		{
		    k=0;
			while (k < 10)
			{
				if (((i != j) && (j != k) && (i != k)) && ((k > j) && (j > i)))
				{
					if (is_first_line != 1)
					{
                        ft_putchar(',');
						ft_putchar(' ');
					}

					ft_putchar(i + n);
					ft_putchar(j + n);
					ft_putchar(k + n);

					is_first_line = 0;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}