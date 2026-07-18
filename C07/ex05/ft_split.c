/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 20:36:21 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/18 21:23:54 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ischarest(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!ft_ischarest(str[i], charset)
			&& (i == 0 || ft_ischarest(str[i - 1], charset)))
			count++;
		i++;
	}
	return (count);
}

int	ft_len(char *str, char *charset)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] && !ft_ischarest(str[i], charset))
	{
		i++;
		len++;
	}
	return (len);
}

char	*ft_initword(char *str, int len)
{
	char	*word;
	int		i;

	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	str[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		len;
	int		j;

	res = malloc((ft_count_words(str, charset) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (!ft_ischarest(str[i], charset))
		{
			len = ft_len(str + i, charset);
			res[j] = ft_initword(str, len);
			j++;
			i += len;
		}
		else
			i++;
	}
	res[j] = NULL;
	return (res);
}
