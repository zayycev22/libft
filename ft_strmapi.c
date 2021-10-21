/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:33:07 by                   #+#    #+#             */
/*   Updated: 2021/10/17 15:33:07 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ans;

	if ((!s) || (!s && !f))
		return (NULL);
	ans = ft_strdup(s);
	if (!ans)
		return (NULL);
	i = 0;
	while (ans[i])
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	return (ans);
}
