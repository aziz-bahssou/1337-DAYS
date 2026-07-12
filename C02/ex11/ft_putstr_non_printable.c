/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:37:17 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/12 00:22:03 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_puchar(char c)
{
	write(1,&c,1);
}
void	to_hex(char c)
{
	char*	hex = "0123456789abcdef";
	ft_puchar(hex[c / 16]);
	ft_puchar(hex[c % 16]);

}
void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write(1, "\\",1);
			to_hex(str[i]);
			i++;
		}
		ft_puchar(str[i]);
		i++;
	}
}
