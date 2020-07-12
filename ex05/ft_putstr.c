/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 12:05:49 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/12 12:06:40 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char *c);

void	ft_putstr(char *str){
    int count;
    char *ptr;
    count = 0;
    
    while(count < strlen(str)){
        ptr = (str + count);
        ft_putchar(ptr);
        count ++;
    }
}
