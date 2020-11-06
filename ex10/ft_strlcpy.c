/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <letumany@student.42.hy>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 09:17:03 by letumany          #+#    #+#             */
/*   Updated: 2020/11/06 11:11:11 by letumany         ###   ########.hy       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
 {
     unsigned int        i;
 
     i = 0;
     while (src[i])
         i++;
     if (size == 0)
         return (i);
     i = 0;
     while (src[i] && i < size - 1)
     {
         dest[i] = src[i];
         i++;
     }
     dest[i] = '\0';
     i = 0;
     while (src[i])
         i++;
     return (i);
 }
