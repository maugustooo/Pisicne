/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:08:20 by maugusto          #+#    #+#             */
/*   Updated: 2023/12/16 17:26:13 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = swap;
		i++;
	}
}

// int	main()
// {
// 	int tab[4] = {0, 1, 2, 3};
// 	int size = 4;

// 	ft_rev_int_tab(tab, size);
// 	printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]); 
// 	return (0);
// }	
