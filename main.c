#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <time.h>
#include <execinfo.h>
#include <locale.h>
#include <sys/mman.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>
#include <stdarg.h>
#include "libft.h"
#include "string.h"

void	print(char **mass)
{
	int	i;

	i = 0;
	while (mass[i])
	{
		printf("%s", mass[i]);
		i++;
	}
}
void			split_cmp_array(char **expected, char **got)
{
	for (; *expected; expected++, got++)
	{
		if (*got == NULL || strcmp(*expected, *got))
		{
			printf("DIFF %s %s",*expected, *got);
		}
	}
}

static void			ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void			ft_print_tabstr(char **tabstr)
{
	int		i;

	i = 0;
	while (tabstr[i] != NULL)
	{
		ft_print_result(tabstr[i]);
		write(1, "\n", 1);
		free(tabstr[i]);
		i++;
	}
	free(tabstr);
}

static void			check_split(char *s, char c)
{
	char	**tabstr;

	if (!(tabstr = ft_split(s, c)))
		ft_print_result("NULL");
	else
		ft_print_tabstr(tabstr);
}

int	main(int argc, char **argv)
{
	char *string = "split  ||this|for|me|||||!|";
	int		i = 0;
	char **expected = (char*[6]){"split  ", "this", "for", "me", "!", NULL};
	check_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	//free(result);
}
