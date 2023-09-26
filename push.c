

# include "push.h"


void	ft_lstdelone(t_list *lst, void (*del)(int))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
		lst = NULL;
	}
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

int	ft_atoi(const char *str)
{
	int		c;
	int		sign;
	size_t	numero;

	c = 0;
	sign = 1;
	numero = 0;
	while (str[c] == 32 || (str[c] >= 9 && str[c] <= 13))
			c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			sign *= -1;
		c++;
	}
	while (str[c] > 47 && str[c] < 58)
	{
		numero = numero * 10 + (str[c] - 48);
		c++;
	}
	if (numero > 9223372036854775807 && sign == 1)
		return (-1);
	else if (numero > 9223372036854775807 && sign == -1)
		return (0);
	return (numero * sign);
}


t_list	*ft_lstnew(int content)
{
	t_list	*nodo;

	nodo = (t_list*)malloc(sizeof(t_list));
	if (nodo != NULL)
	{
		nodo->content = content;
		nodo->next = NULL;
	}
	return (nodo);
}
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		if (!lst)
			*lst = new;
		new->next = *lst;
		*lst = new;
	}
}
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temporal;

	temporal = ft_lstlast(*lst);
	if (*lst == NULL)
		*lst = new;
	else
		temporal->next = new;
}

int lstpop(t_list **stack)
{
	
	t_list	*aux;
	int		cont;

	aux = (*stack);
	(*stack) = (*stack)->next;
	cont = (*stack)->content;
	free(aux);
	aux = NULL;
	return (cont);
}

int main(int argc, char **argv)
{
    t_list *stackA = NULL;
    t_list *stackB = NULL;
	int		size;

	size = argc -1;

	t_list *auxA;
	t_list *auxB;

	auxA=stackA;
	auxB=stackB;


	int i = 1;

	(void)argc;
		
	while (argv[i] != NULL)
	{
		ft_lstadd_back(&stackA, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}

	sa(&stackA,0);
	ft_lstadd_back(&stackB, ft_lstnew(lstpop(&stackA)));
	ft_print_stack_horizontal(stackA, stackB);
	return 0;
}