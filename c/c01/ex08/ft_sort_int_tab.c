/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:00:54 by maugusto          #+#    #+#             */
/*   Updated: 2023/12/18 15:09:40 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i + 1] < tab[i])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}

// int	main(void)
// {
// 	int tab[4] = {2, 1, 4, 5};
// 	int size = 4;

// 	ft_sort_int_tab(tab, size);
// 	printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]); 
// 	return (0);
// }