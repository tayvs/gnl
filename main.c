
#include "get_next_line.h"

int	main()
{
	int fd;
	char *str;

	fd = open("test.txt");
	get_next_line(fd, &str);
	printf("%s\n", str);
}