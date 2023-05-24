#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


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

int main(int argc, char **argv)
{
    t_list *pilaA = ft_lstnew(899);
    t_list *pilaB = ft_lstnew(0);
    t_list pilaAux = *ft_lstnew(0);

	int j = 30;
	int i = 0;
	int aux;

	while (argv[i] != NULL)
	{
		ft_lstadd_back(&pilaA, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}

	
    int valor = 0;

   
	while (pilaA->next)
	{
		printf("%d\n", (int)pilaA->content);
		pilaA = pilaA->next;
	}
	ft_lstadd_front(&pilaB, ft_lstnew(lstpop(pilaA)));
	printf("EL CONTENIDO DE LA PILA B ES %d\n", pilaB->content);

return 0;
}