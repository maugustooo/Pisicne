/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 20:25:01 by maugusto          #+#    #+#             */
/*   Updated: 2024/01/04 14:42:45 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// char	*ft_strdup(char *src)
// {
// 	char	*new;
// 	int		src_len;
// 	int		i;

// 	i = 0;
// 	src_len = ft_strlen(src);
// 	new = malloc(src_len);
// 	while (src[i])
// 	{
// 		new[i] = src[i];
// 		i++;
// 	}
// 	new[i] = '\0';
// 	return (new);
// } 

//  struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
//     int			i;
//     t_stock_str	*array;

// 	array = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
// 	i = 0;
// 	if (!array)
// 		return (0);
// 	while (i < ac)
// 	{
// 		array[i].size = ft_strlen(av[i]);
// 		array[i].str = av[i];
// 		array[i].copy = ft_strdup(av[i]);
//         i++;
//     }
//     array[i].str = 0;
//     return(array);
// }

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

/* int main (int  argc,char *argv[])
{
    ft_show_tab(ft_strs_to_tab(argc, argv));
} */