/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:51:11 by maugusto          #+#    #+#             */
/*   Updated: 2024/01/02 15:08:15 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:19:21 by maugusto          #+#    #+#             */
/*   Updated: 2023/12/27 15:33:48 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	dif;
	int	*ptr;
	int	i;

	if (min >= max)
		return (0);
	dif = max - min;
	ptr = (int *)malloc(dif * sizeof(int));
	i = 0;
	*range = ptr;
	while (i < dif)
	{
		ptr[i] = min + i;
		i ++;
	}
	return (dif);
}
/* 
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
		printf("%d", size);
}  */