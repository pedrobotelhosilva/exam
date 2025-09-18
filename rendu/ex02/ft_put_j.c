#include <unistd.h>
#include <stdio.h>

void	ft_put_j(void)
{
	write(1, "J\n", 3);
}

int	main(void)
{
	ft_put_j();
	return(0);
}
