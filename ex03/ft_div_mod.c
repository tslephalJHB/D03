/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 11:39:29 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/12 11:39:48 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  ft_div_mod(int a, int b, int *div, int *mod){
    *div = a/b;
    *mod = a%b;
}
