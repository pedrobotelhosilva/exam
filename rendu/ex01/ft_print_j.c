#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	write(1, "J", 1);
        write(1, "\n", 1);
	return(0);
}
