/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:13:17 by maugusto          #+#    #+#             */
/*   Updated: 2023/12/30 11:07:10 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	long	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb -1);
		nb -= 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}

/* int main()
{
	printf("%i", ft_recursive_factorial(3));
} */