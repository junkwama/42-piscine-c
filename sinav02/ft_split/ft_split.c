// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int is_letter(char c)
{
    if (c != ' ' && c != '\n' && c != '\t' && c != '\0')
        return (1);
    return (0);
}

void allocate(char **tab, char *str)
{
    int bits;
    int i;
    
    bits = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (is_letter(str[i]) == 1)
        {
            while (is_letter(str[i]) == 1)
            {
                bits++;
                i++;
            }
            bits++; 
        }
        else
            i++;
    }
    *tab = malloc(bits);
    //printf("%d", bits);
}

char    **ft_split(char *str)
{
    char **str_tab;
    int i;
    int j;
    int k;
    
    i = 0;
    j = 0;
    allocate(str_tab, str);
    
    while (str[i] != '\0')
    {
        if (is_letter(str[i]) == 1)
        {
            k = 0;
            while (is_letter(str[i]) == 1)
            {
                str_tab[j][k] = str[i];
                i++;
                k++;
            }
            str_tab[j][k + 1] = '\0';
            j++;
        }
        else
            i++;
    }
    return (str_tab);
}

int main() {
    char text[] = "ajkds dklsjdl  djksll    ds;lk.  ";
    char **tab = ft_split(text);
    int i = 0;

    while(tab[i])
    {
        printf("%s", tab[i]);
        i++;
    }
    return (0);
}
