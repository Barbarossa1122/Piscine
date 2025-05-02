#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "file.h"
#include "utility.h"

int	ft_dict_fileopen(char **argv, int argc)
{
	int	fd;
	char	*pathname;

	pathname = "./numbers.dict";
	if (argc == 3)
	{
		if (!ft_isnum(argv[1]))
			fd = open(argv[1], O_RDONLY);
		else
				return (-1);
	}
		else
			fd = open("./numbers.dict", O_RDONLY);
	return (fd);
}

int	ft_dict_getsize(int fd)
{
	char	c;
	int	bytes_read;
	long long int	size;
	int	cnt;

	cnt = 0;
	size = 0;
	bytes_read = read(fd, &c, 1);
	while (bytes_read > 0)
	{
		if (c == ':')
			cnt++;
		if (c == '\n' && cnt == 0)
		{
			bytes_read = read(fd, &c, 1);
		}
		else if (c == '\n' && cnt == 1)
		{
			size++;
			cnt = 0;
		}
		bytes_read = read(fd, &c, 1);
	}
	return (size);
}

