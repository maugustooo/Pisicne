/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 20:14:38 by maugusto          #+#    #+#             */
/*   Updated: 2024/01/04 14:37:38 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(ft_strlen(src) * sizeof(char));
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++; 
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*array;

	array = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	i = 0;
	if (!array)
		return (0);
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}

/* int main (int  argc,char *argv[])
{
	int i;
	t_stock_str *array;
	i = 0;
	array = ft_strs_to_tab(argc, argv);
	while (i < argc)
	{
	printf(" Size: %d\nStr: %s\nCopy: %s\n", 
	array[i].size,array[i].str, array[i].copy);
	// printf("Str: %s\n", array[i].str);
	// printf("Copy: %s\n", array[i].copy);
	printf("\n");
	i++;
	}
} */