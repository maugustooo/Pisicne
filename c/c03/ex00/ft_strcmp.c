/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:09:49 by maugusto          #+#    #+#             */
/*   Updated: 2023/12/23 19:44:08 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i ++;
	return (s1[i] - s2[i]);
}

int	main()
{
	printf("%d", ft_strcmp("Hellooo", "Helloo"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));
}