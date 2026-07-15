/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 15:17:01 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/15 19:51:15 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_totallen(char **strs, int size, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_count_len(strs[i]);
		if (i < size - 1)
			len += ft_count_len(sep);
		i++;
	}
	return (len);
}

char	*ft_imptystr(void)
{
	char	*str;

	str = malloc(1 * sizeof(char));
	if (!str)
		return (NULL);
	*str = '\0';
	return (str);
}

void	ft_strcat(char *str, char *src, int *pos)
{
	int	i;

	i = 0;
	while (src[i])
	{
		str[*pos] = src[i];
		i++;
		(*pos)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		pos;

	if (size == 0)
		return (ft_imptystr());
	str = malloc (ft_totallen(strs, size, sep) + 1);
	if (!str)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i], &pos);
		if (i < (size - 1))
		{
			ft_strcat(str, sep, &pos);
		}
		i++;
	}
	str[pos] = '\0';
	return (str);
}
