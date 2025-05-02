
#include "dictionary.h"
#include <stdlib.h>
#include <unistd.h>
#include "utility.h"

#include <stdio.h>

node	*ft_dict_getnode(node *cell, int fd) //ft_dict_getnode(node cell, int fd)
{
	char	temp[1000];
	char	c[1];
	ssize_t	bytes_read;
	int	letters;
	int	cnt;

	cell->key = 0;
	cnt = 0;
	letters = 0;
	bytes_read = read(fd, c, 1);
	printf("Bytes:%ld\n", bytes_read);
	while (bytes_read > 0)
	{
		printf("Bytes:%ld\n", bytes_read);
		while (c[0] >= '0' && c[0] <= '9' && cnt == 0)
		{
			cell->key = cell->key * 10 + (c[0] - '0');
			bytes_read = read(fd, c, 1);
		}
		if (c[0] == ':')
			cnt++;
		while (cnt == 1 && c[0] != ' ' && c[0] != '\n')
		{
			temp[letters] = c[0];
			letters++;
			bytes_read = read(fd, c, 1);
		}
		if (letters > 0)
		{
			temp[letters] = '\0';
			cell->reference = (char *) malloc (sizeof(char)* (letters + 1));
			letters = 0;
			ft_strcpy(cell->reference, temp);
		}
		if (c[0] == '\n' && cnt == 1)
			cnt = 0;
		bytes_read = read(fd, c, 1);
	}
	return (cell);
}

dictionary	ft_create_dictionary(int fd)
{
	dictionary dict;
	int	dict_size;
	int	i;
	i = 0;
	dict_size = ft_dict_getsize(fd);
	dict = (dictionary) malloc(sizeof(node) * (dict_size + 1)); 
	if (dict == NULL)
		return(NULL);
	dict[dict_size].reference = NULL;
	while (i < dict_size)
	{	
		ft_dict_getnode(&dict[i], fd);
		i++;
	}
	return (dict);
}

void	ft_destroy_dictionary(dictionary dict)
{
	int	i;

	i = 0;
	while (dict[i].reference != NULL)
		free(dict[i].reference);
	free(dict);
}
