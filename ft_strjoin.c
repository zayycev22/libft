#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cons;

	cons = (char *)malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2)));
	if (!cons)
		return (NULL);
	while (cons && s1)
	{
		*cons = *s1;
		cons++;
		s1++;
	}
	while (cons && s2)
	{
		*cons = *s2;
		cons++;
		s2++;
	}
	return (cons);
}
