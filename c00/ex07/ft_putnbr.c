#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_reverse_number(int n)
{
	int given_number;
	int output;
	int to_add;

	given_number = n;
	output = 0;

	while (given_number > 0)
	{
		to_add = given_number % 10;
		output = (output * 10) + to_add;
		given_number = given_number / 10;
	}
	{
		return output;
	}
}

void	ft_putnbr(int n)
{
	
	int reversed_number;
	reversed_number = ft_reverse_number(n);

	if (reversed_number == 0)
	{
		ft_putchar(48);
	}
	else
	{
		int to_print;
		while (reversed_number > 0)
		{
			to_print = reversed_number % 10;
			ft_putchar(48 + to_print);
			reversed_number = reversed_number / 10;
		}
	}
}