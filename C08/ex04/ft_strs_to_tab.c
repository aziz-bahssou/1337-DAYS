/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 00:33:52 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/21 01:19:08 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_stock_str
{
int size;
char *str;
char *copy;
}
				t_stock_str;


int	ft_getlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char *ft_str_cpy(char *cpy, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *stock;
	int			i;
	

	if (ac == 0)
		return (NULL);
	
	stock = malloc((ac + 1) * sizeof(t_stock_str));
	if (!stock)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_getlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = malloc((ft_getlen(av[i]) + 1));
		if (!stock[i].copy)
			return (NULL);
		ft_str_cpy(stock[i].copy,stock[i].str);
		i++;
	}
	stock[ac].str = NULL;
	return (stock); 
	
} 