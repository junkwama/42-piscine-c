#include <stdio.h>
#include "ft_strcpy.c"

int	main ()
{
	char src[6] = "hello";
	char dest[6];

	ft_strcpy(dest, src);
	printf("%s", dest);

	return (0);
}

