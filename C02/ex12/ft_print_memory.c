/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 02:18:19 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/12 15:46:43 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_asciiline(unsigned char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!(str[i] >= 32 && str[i] < 127))
		{
			ft_putchar('.');
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

void	ft_print_hexline(unsigned char *str, int size)
{
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	while (i < size)
	{
		ft_putchar(hex[str[i] / 16]);
		ft_putchar(hex[str[i] % 16]);
		if (i % 2 == 1)
		{
			write(1, " ", 1);
		}
		i++;
	}
	if (size < 16)
	{
		while (size < 16)
		{
			write (1, "  ", 2);
			size++;
		}
	}
}

void	ft_priaddre(unsigned long ptr)
{
	char	*hex;
	char	arr[16];
	int		i;

	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		arr[i] = (hex[ptr % 16]);
		ptr = (ptr / 16);
		i--;
	}
	i = 0;
	write(1, arr, 16);
	write(1, ":", 1);
	write(1, " ", 1);
}

void	*ft_print_memory(void *addr, unsigned	int size)
{
	unsigned char	*str;
	unsigned int	i;
	unsigned int	i_num;

	str = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		if (size - i < 16)
		{
			i_num = size - i;
		}
		else
		{
			i_num = 16;
		}
		ft_priAddre ((unsigned long)(str + i));
		ft_print_hexline (str + i, i_num);
		ft_print_asciiline (str + i, i_num);
		write(1, "\n", 1);
		i += 16;
	}
	return (str);
}
