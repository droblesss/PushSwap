#include "push.h"

typedef struct s_list
{
	int			content;
	struct s_list	*next;
}	t_list;

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

	nodo = (t_list *) malloc(sizeof(int));
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

int lstpop(t_list *stack)
{
	// integrar funcion de tamaño de lista para comprobar que no esté vacía

	// devolver el valor de tail
	while (stack != NULL && stack->next != NULL)
		stack = stack->next;
	return (stack->content);

}
