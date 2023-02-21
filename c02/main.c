#include <stdio.h>
#include "ft_strupcase.c"
int main ()
{
    char src[11] = "xzxA434_z";
    ft_strupcase(src);

    printf("%s", src);
    return (0);
}
