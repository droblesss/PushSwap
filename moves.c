/*El objetivo es ordenar los números del stack a en orden ascendente.
• Para hacerlo tienes las siguientes operaciones a tu disposición:


rra : reverse rotate a - desplaza hacia abajo todos los elementos del stack a una
posición, de forma que el último elemento se convierte en el primero.

rrb : reverse rotate b - desplaza hacia abajo todos los elementos del stack b una
posición, de forma que el último elemento se convierte en el primero.
rrr : reverse rotate a y reverse rotate b - desplaza al mismo tiempo todos
los elementos del stack a y del stack b una posición hacia abajo, de forma que
el último elemento se convierte en el primero
*/
# include "push.h"

void sb(t_list **stack_b, int ss)
{
	t_list *first;
	t_list *second;
	int	temp;

	if ((*stack_b) != NULL && (*stack_b)->next != NULL)
	{
		first = (*stack_b);
		second = (*stack_b)->next;
		temp = first->content;
		first->content = second->content;
		second->content = temp;
	}
	if (ss == 0)
		write(1, "sb\n", 3);


}

void pb(t_list **stack_a, t_list **stack_b)
{
	ft_lstadd_front(stack_b, ft_lstnew(lstpop(stack_a)));
	(*stack_a)->size = (*stack_a)->size-1;
	(*stack_b)->size = (*stack_b)->size+1;
	write(1, "pb\n", 3);
}


void rb(t_list **stack_b, int ss)
{
	int extract;

	if ((*stack_b) != NULL && (*stack_b)->next != NULL)
	{
		extract = lstpop(stack_b);
		ft_lstadd_back(stack_b, ft_lstnew(extract));
	}
	if (ss == 0)
		write(1, "rb\n", 3);

}

void rr(t_list **stack_a,t_list **stack_b, int ss)
{
	ra(stack_a,1);
	rb(stack_b,1);
	if (ss == 1)
		write(1, "rr\n", 3);
}

void rrb(t_list **stack_b, int ss)
{
    if (*stack_b == NULL || (*stack_b)->next == NULL) {
        return;
    }

    t_list *current = *stack_b;
    t_list *previous = NULL;

    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }
    previous->next = NULL;
    current->next = *stack_b;
    *stack_b = current;
    if (ss == 0)
        write(1, "rra\n", 4);
}