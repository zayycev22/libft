#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cons;
	int		i;
	int		j;

	i = 0;
	j = 0;
	cons = (char *)malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2)));
	if (!cons)
		return (NULL);
	while (s1[j])
	{
		cons[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		cons[i] = s2[j];
		i++;
		j++;
	}
	cons[i] = '\0';
	return (cons);
}
