/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:32:34 by                   #+#    #+#             */
/*   Updated: 2021/10/17 15:32:34 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*it;
	size_t	i;
	size_t	len;

	len = ft_strlen(s) + 1;
	it = (char *)malloc(len * sizeof(char));
	if (!it)
		return (NULL);
	i = 0;
	while (i < len)
	{
		it[i] = s[i];
		i++;
	}
	it[i] = '\0';
	return (it);
}
