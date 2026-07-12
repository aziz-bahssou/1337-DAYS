/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 20:44:45 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/11 19:20:46 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isvalid(char c)
{
	
	if (!(( c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
	{
		if (!(c >= '0' && c <= '9'))
		{
			return (0);
		}
	}
	return (1);
}

void	ft_capoit_it(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (str[i])
	{
		if (ft_isvalid(str[i]))
		{
			if (count && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
				count = 0;
			}
			else
			{
				count = 0;
			}
		}
		else
		{
			count = 1;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	ft_capoit_it(str);
	return (str);
}
