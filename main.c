#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list);

t_list	*new_node(void *data)
{
	t_list *node = malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return node;
}

int	main(void)
{
	t_list *a = new_node("A");
	t_list *b = new_node("B");
	t_list *c = new_node("C");

	a->next = b;
	b->next = c;

	printf("%d\n", ft_list_size(a)); // 3

	return 0;
}
