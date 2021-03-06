/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataftai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 16:33:49 by ataftai           #+#    #+#             */
/*   Updated: 2016/12/12 14:03:23 by ataftai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		while (*s1 && *s2 && *s1 == *s2 && n--)
		{
			s1++;
			s2++;
		}
		if (*s1 == *s2 || n == 0)
			return (1);
	}
	return (0);
}
