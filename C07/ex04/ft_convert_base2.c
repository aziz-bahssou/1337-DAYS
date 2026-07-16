/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 19:24:49 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/16 21:38:18 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base_len(char *base);
int	ft_valid_base(char *base);

int	ft_count_digit(long nb, int len)
{
	int	count;

	if (nb == 0)
		return (1);
	count = 0;
	while (nb > 0)
	{
		nb /= len;
		count++;
	}
	return (count);
}

void	ft_init(int nb, long *nbr, char *sign)
{
	*nbr = (long)nb;
	*sign = '+';
	if (*nbr < 0)
	{
		*nbr = -*nbr;
		*sign = '-';
	}
}

char	*ft_itoabase(int nb, char *base_to)
{
	char	*res;
	int		size;
	long	nbr;
	char	sign;
	int		base_len;

	base_len = ft_base_len(base_to);
	ft_init(nb, &nbr, &sign);
	size = ft_count_digit(nbr, base_len);
	if (sign == '-')
		size++;
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	res[size] = '\0';
	while (nbr > 0)
	{
		res[--size] = base_to[nbr % base_len];
		nbr /= base_len;
	}
	if (sign == '-')
		res[0] = '-';
	return (res);
}