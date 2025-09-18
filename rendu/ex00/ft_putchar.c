#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int	main(void)
{
	char	c;

	c = 'b';
	ft_putchar(b);
	return 0;
}
*/
