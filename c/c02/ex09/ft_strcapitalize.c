/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:59:45 by maugusto          #+#    #+#             */
/*   Updated: 2023/12/20 09:53:24 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	ver;

	i = 0;
	ver = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (ver == 1)
			{
				str[i] = str[i] - 32;
				ver = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			ver = 0;
		else
			ver = 1;
		i++;
	}
	return (str);
}

// int main (void)
// {
// 	char str[]="ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
// 	ft_strcapitalize(str);
// 	printf("%s", str);
// }