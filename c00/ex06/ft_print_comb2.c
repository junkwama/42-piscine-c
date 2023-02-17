#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(char c)
{
	int x2;
	int x1;

	x1 = (i * 10) + j;
	x2 = (k * 10) + l;
	
	if (!((i == k) && (j == l)) && (x2 > x1))
	{
		if (is_first_line != 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		ft_putchar(i + n);
		ft_putchar(j + n);
		ft_putchar(' ');
		ft_putchar(k + n);
		ft_putchar(l + n);
		is_first_line = 0;
	}
}

void	ft_print_comb()
{
	int n;
	int i;
	int j;
	int k;
	int l;

	int is_first_line = 1;

	n = 48;
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	
	while (i < 10)
	{
	    j = 0;
		while (j < 10)
		{
		    k = 0;
			while (k < 10)
			{
				l = 0;
				while (l < 10)
				{
					ft_print_number(i, j, k, l);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}