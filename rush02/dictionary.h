

#ifndef FT_DICT_H
# define FT_DICT_H

#include "file.h"
typedef struct	t_node
{
	long long int	key;
	char	*reference;
} node;

typedef node	*dictionary;

dictionary	ft_create_dictionary(int fd);
void	ft_destroy_dictionary(dictionary dict);
node	*ft_dict_getnode(node *cell, int fd);


#endif

