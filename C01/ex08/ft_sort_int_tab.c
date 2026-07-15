/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07 01:31:34 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07 01:31:37 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_int_tab(int *tab, int size){
    int i = 0;
    int j ;
    int temp = 0;

    while ( i < (size - 1)){
        j =  i + 1;
            while (j < size){
                if(tab[i] > tab[j]){
                    temp = tab[i];
                    tab[i] = tab[j];
                    tab[j] = temp; 
                }
            j++;
        }
        i++;
    }
    
}