/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 17:59:23 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/16 21:37:55 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoabase(int nbr, char *base_to);

int	ft_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_valid_base(char *base)
{
	int		i;
	int		j;

	if (ft_base_len(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_get_deget(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	long	res;
	int		sing;
	int		len;
	int		i;

	len = ft_base_len(base_from);
	i = 0;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	sing = 1;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sing *= -1;
		i++;
	}
	res = 0;
	while (ft_get_deget(nbr[i], base_from) != -1)
	{
		res = res * len + (ft_get_deget(nbr[i], base_from));
		i++;
	}
	return (res * sing);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;
	if (!ft_valid_base(base_from) || !ft_valid_base(base_to))
		return (NULL);

	nb = ft_atoi_base(nbr, base_from);
	return (ft_itoabase(nb, base_to));
}
