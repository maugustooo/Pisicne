/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:07:11 by maugusto          #+#    #+#             */
/*   Updated: 2023/12/30 10:26:45 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	n1;

	n1 = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb >= 2)
	{
		while (n1 * n1 <= nb)
		{
			if (n1 * n1 == nb)
				return (n1);
			n1++;
		}
	}
	return (0);
}

/* int main()
{
	printf("%i", ft_sqrt(10));
} */