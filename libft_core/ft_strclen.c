/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaddox <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:42:50 by smaddox           #+#    #+#             */
/*   Updated: 2019/05/06 12:38:20 by smaddox          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strclen(char const *s, char c)
{
	size_t i;

	i = 0;
	if (!*s)
	{
		return (0);
	}
	while (*(s + i) != c && *(s + i))
	{
		i++;
	}
	return (i);
}
