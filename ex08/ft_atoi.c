/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:27:03 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/13 14:28:07 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int count;
    int res;
    int neg_pos;
   
    count = 0;
    res = 0;
    if(str[count] == '-')
    {
        neg_pos = -1;
        count++;
    }
    else
    {
        neg_pos = 1;
    }
    
    while(str[count] != '\0')
    {
        res = (res * 10) + (str[count] - '0');
        count++;
    }
    res = neg_pos * res;
    return(res);
}
