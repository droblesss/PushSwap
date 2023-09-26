/*El objetivo es ordenar los números del stack a en orden ascendente.
• Para hacerlo tienes las siguientes operaciones a tu disposición:
sa : swap a - intercambia los dos primeros elementos encima del stack a. No hace
nada si hay uno o menos elementos.
sb : swap b - intercambia los dos primeros elementos encima del stack b. No hace
nada si hay uno o menos elementos.
ss : swap a y swap b a la vez.
pa : push a - toma el primer elemento del stack b y lo pone encima del stack a.
No hace nada si b está vacío.
pb : push b - toma el primer elemento del stack a y lo pone encima del stack b.
No hace nada si a está vacío.
ra : rotate a - desplaza hacia arriba todos los elementos del stack a una posición,
de forma que el primer elemento se convierte en el último.
rb : rotate b - desplaza hacia arriba todos los elementos del stack b una posición,
de forma que el primer elemento se convierte en el último.
rr : rotate a y rotate b - desplaza al mismo tiempo todos los elementos del stack
a y del stack b una posición hacia arriba, de forma que el primer elemento se
convierte en el último.
rra : reverse rotate a - desplaza hacia abajo todos los elementos del stack a una
posición, de forma que el último elemento se convierte en el primero.
7
Push_swap Swap_push no suena tan natural
rrb : reverse rotate b - desplaza hacia abajo todos los elementos del stack b una
posición, de forma que el último elemento se convierte en el primero.
rrr : reverse rotate a y reverse rotate b - desplaza al mismo tiempo todos
los elementos del stack a y del stack b una posición hacia abajo, de forma que
el último elemento se convierte en el primero
*/
# include "push.h"
void sa(t_list **stack_a, int ss)
{
	t_list *first;
	t_list *second;
	int	temp;

	if ((*stack_a) != NULL && (*stack_a)->next != NULL)
	{
		first = (*stack_a);
		second = (*stack_a)->next;
		temp = first->content;
		first->content = second->content;
		second->content = temp;
	}
	if (ss == 0)
		write(1, "sa\n", 3);


}
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

void    ft_print_stack_horizontal(t_list *stack_a, t_list *stack_b)//Imprimir todos los elementos del stack
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