#include "dictionary.h"
#include "utility.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	dictionary dict;
	int	fd;

	fd = ft_dict_fileopen(argv, argc);
	if (fd == -1)
	{
		    printf("Failed to open file\n"); // debug
		ft_putstr("Dict Error\n");
			return (-1);
	}
/*
	#include <unistd.h>
	char buf[300];
	read(fd, buf, 30);
	printf("%s\n", buf);
	printf("%d\t\t", fd);
	*/
	
	dict = ft_create_dictionary(fd);

	for (int i = 0; dict[i].reference != NULL; i++)
	{
		
		//printf("%lld\t%s\n", dict[i]->key, dict[i]->reference);
	}

	ft_destroy_dictionary(dict);

}