#include <unistd.h>
#include <stdio.h>

void ft_putnstr(char *str, int n)
{
	write(1, str, n);
}
int	main(void)
{
	char	str[2] = "bv";
	ft_putnstr(str, 2);
	return(0);
}
