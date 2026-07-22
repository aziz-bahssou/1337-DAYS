/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 21:13:58 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/22 21:47:41 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

typedef int t_bool;
#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define EVEN(nbr) (((nbr) % 2) == 0) ? 1 : 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

#endif