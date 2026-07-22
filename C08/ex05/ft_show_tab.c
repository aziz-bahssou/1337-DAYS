/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:54:20 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/23 00:19:38 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_punbr(int nbr)
{
	char	c;

	if (nbr > 9)
		ft_punbr(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c,1);
}

void ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str != NULL)
	{
		j = 0;
		while (par[i].str[j])
		{
			write(1, &par[i].str[j], 1);
			j++;
		}
		write(1, "\n",1);
		ft_punbr(par[i].size);
		write(1, "\n",1);
		j = 0;
		while (par[i].copy[j])
		{
			write(1, &par[i].copy[j], 1);
			j++;
		}
		write(1, "\n",1);
		i++;
	}
	
}