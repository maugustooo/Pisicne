#include "ft_boolean.h"
#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
    write(1, str++, 1);
}

t_bool ft_is_even(int nbr)
{
    return ((EVEN(nbr)) ? TRUE : FALSE);
}

int main(int argc, char **argv)
{
    (void)argv;
    (void)argc;
    if (ft_is_even(2) == TRUE)
        ft_putstr(EVEN_MSG);
    else
        ft_putstr(ODD_MSG);
}