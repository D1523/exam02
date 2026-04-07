#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	print_data(void *data)
{
	printf("%s\n", (char *)data);
}

t_list	*new_node(void *data)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

int	main(void)
{
	t_list *n1;
	t_list *n2;
	t_list *n3;

	n1 = new_node("hello");
	n2 = new_node("world");
	n3 = new_node("42");

	n1->next = n2;
	n2->next = n3;

	ft_list_foreach(n1, print_data);

	return (0);
}
