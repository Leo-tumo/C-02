/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <letumany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 09:22:03 by letumany          #+#    #+#             */
/*   Updated: 2020/11/06 10:34:32 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int n)
 {
     unsigned int        i;
 
     i = 0;
     while (src[i] && i < n)
     {
         dest[i] = src[i];
         i++;
     }
     while (i < n)
     {
         dest[i] = '\0';
         i++;
     }
     return (dest);
 }
