/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:43:39 by maugusto          #+#    #+#             */
/*   Updated: 2023/12/20 09:53:52 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) 
			|| (str[i] >= 65 && str[i] <= 90))
			i ++;
		else
			return (0);
	}
	return (1);
}

// int main (void)
// {
// 	char str[] = "1";
// 	printf("%d", ft_str_is_alpha(str));
// }