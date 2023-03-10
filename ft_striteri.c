/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:27:26 by                   #+#    #+#             */
/*   Updated: 2021/10/17 15:27:26 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	length;

	if (s && f)
	{
		i = 0;
		length = ft_strlen(s);
		while (i < length)
		{
			f(i, s);
			i++;
			s++;
		}
	}
}
