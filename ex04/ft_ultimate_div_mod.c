/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 11:47:45 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/12 11:48:01 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_ultimate_div_mod(int *a, int *b){
    int c; 
    int d;
    
    c = *a;
    d = *b;
    *a = c/d;
    *b = c%d;
}
