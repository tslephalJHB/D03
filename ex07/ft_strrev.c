/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:24:12 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/13 12:40:33 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
    	int count_1; 
   	int count_2;
	int length;

    	length = 0;
    	while(str[length] != '\0')
	{
        	length++;
	}
    	length--;
	count_1 = 0;
    	while (count_1 < length)
	{
        	count_2 = str[count_1];
        	str[count_1] = str[length];
        	str[length] = count_2;
        	length--;
        	count_1++;
    	}
	return(str);
}
