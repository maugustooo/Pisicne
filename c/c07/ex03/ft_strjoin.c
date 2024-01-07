/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:07:33 by maugusto          #+#    #+#             */
/*   Updated: 2024/01/03 10:57:36 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_final_lenght(char **strings, int size, int sep_length)
{
	int	final_length;
	int	i;

	final_length = 0;
	i = 0;
	while (i < size)
	{
		final_length += ft_strlen(strings[i]);
		final_length += sep_length;
		i++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	char	*finalstr;
	int		i;

	if (size == 0)
	{
		finalstr = malloc(sizeof(char));
		*finalstr = 0;
		return (finalstr);
	}
	full_length = ft_final_lenght(strs, size, ft_strlen(sep));
	finalstr = (char *)malloc((full_length + 1) * sizeof(char));
	if (!finalstr)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(finalstr, strs[i]);
		if (i < size -1)
			ft_strcat(finalstr, sep);
		i++;
	}
	return (finalstr); 
}

/* int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 4;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[0] = "";
	strs[1] = "";
	strs[2] = "";
	separator = " | ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}    */