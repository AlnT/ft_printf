/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataftai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:43:51 by ataftai           #+#    #+#             */
/*   Updated: 2016/12/12 16:38:01 by ataftai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;

	i = 0;
	while (s1[i])
		i++;
	while (*s2)
	{
		s1[i] = *s2++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}