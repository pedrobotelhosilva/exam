#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	write(1, "J", 1);
        write(1, "\n", 1);
	ft_print_j();
	return(0);
}
