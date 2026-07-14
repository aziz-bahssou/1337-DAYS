/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 23:04:37 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/14 23:06:46 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_baselen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int ft_isvalide(char *str)
{
	int i;
	int j;

	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int get_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int ft_atoi_base(char *str, char *base)
{
	int res;
	int i;
	int len;
	int sing;

	sing = 1;
	res = 0;
	len = ft_baselen(base);
	if (!ft_isvalide)
		return (0);
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing *= -1;
		i++;
	}
	while (get_base(str[i], base) != -1)
	{
		res = res * len + (get_base(str[i++], base));
	}
	return (res * sing);
}
