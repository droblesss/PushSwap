
# include "push.h"



void    ft_print_stack_horizontal(t_list *stack_a, t_list *stack_b)
{
    printf("\n--------------\n");
    printf("A:");
    while (stack_a)
    {
        printf(" %d |", (int)stack_a->content);
        stack_a = stack_a->next;
    }
    printf("\n");
    printf("B:");
    while (stack_b)
    {
        printf(" %d |", (int)stack_b->content);
        stack_b = stack_b->next;
    }
    printf("\n--------------\n");
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

	cont = (*stack)->content;
	(aux) = (*stack);
	*(stack) = (*stack)->next;
	free(aux);
	return (cont);
}

void fillA(t_list **stackA, char **argv)
{
	int i = 1;
	//int j = 0;
	while (argv[i])
	{
		
		all_elements_are_numbers(argv);
		ft_lstadd_back(stackA, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	not_repeat((*stackA));
}

int	ft_isdigit(char src)
{
	printf("Entrando en la funcion isdigit\n");
	printf("%c", src);
	if ((src >= '0') && (src <='9')){
		return 0;
	}
	exit(1);
}
int	ft_lstsize(t_list *lst)
{
	int	contador;

	contador = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		contador++;
	}
	return (contador);
}