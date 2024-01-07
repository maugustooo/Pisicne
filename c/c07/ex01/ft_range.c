/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:19:21 by maugusto          #+#    #+#             */
/*   Updated: 2024/01/04 14:19:55 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*ptr;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	ptr = malloc(range * sizeof(int));
	if (!ptr)
		return (0);
	i = 0;
	while (i < range)
	{
		ptr[i] = min + i;
		i ++;
	}
	return (ptr);
}

/* int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}

} */