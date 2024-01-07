/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:11:10 by maugusto          #+#    #+#             */
/*   Updated: 2023/12/23 14:56:43 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (j + i < size && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j ++;
	}
	dest[i + j] = '\0';
	return (i + j);
}

int	main()
{
	char src[] = "Network";
	char dest[] = "42 ";
	char teste = ft_strlcat(dest, src, 15);
	printf("%u", ft_strlcat(dest, src, 15));
}