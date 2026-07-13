/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 17:29:15 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/13 21:15:28 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_baselen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_isvalide(char *str)
{
	int	i;
	int	j;

	if (str[0] == '\0' || str[1] == '\0')
	{
		return (0);
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			return (0);
		}
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	n;

	len = ft_baselen(base);
	if (!ft_isvalide(base))
	{
		return ;
	}
	n = nbr;
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	if (n >= len)
	{
		ft_putnbr_base(n / len, base);
	}
	write (1, &base[n % len], 1);
}
