#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"
void print(char **mass)
{
	int	i;

	i = 0;
	while (mass[i])
	{
		printf("%s ", mass[i]);
		i++;
	}
}
int	main(int argc, char **argv)
{
	char	a[] = "hellomydarling";
	printf("%s\n", ft_itoa(1234234223));
}
