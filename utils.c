/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:00:15 by drobles           #+#    #+#             */
/*   Updated: 2023/10/26 20:20:08 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

/*void	ft_print_stack_horizontal(t_list *stack_a, t_list *stack_b)
{
    ft_printf("\n--------------\n");
    ft_printf("A:");
    while (stack_a)
    {
        ft_printf(" %d |", (int)stack_a->content);
        stack_a = stack_a->next;
    }
    ft_printf("\n");
    ft_printf("B:");
    while (stack_b)
    {
        ft_printf(" %d |", (int)stack_b->content);
        stack_b = stack_b->next;
    }
    ft_printf("\n--------------\n");
}*/

long	ft_atoi(const char *str)
{
	int		c;
	int		sign;
	long	numero;

	c = 0;
	sign = 1;
	numero = 0;
	if (ft_strlen(str) > 12 || ft_strlen(str) < 1)
		ft_error(1);
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
	if (numero * sign < INT_MIN || numero * sign > INT_MAX)
		ft_error(1);
	return (numero * sign);
}

int	lstpop(t_list **stack)
{
	t_list	*aux;
	int		cont;

	cont = (*stack)->content;
	(aux) = (*stack);
	*(stack) = (*stack)->next;
	free(aux);
	return (cont);
}

void	filla(t_list **stack_a, char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		all_elements_are_numbers(argv);
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	not_repeat((*stack_a));
	ft_intsize(*stack_a);
}

int	ft_isdigit(char src)
{
	if ((src >= '0') && (src <= '9'))
	{
		return (0);
	}
	write(2, "Error\n", 6);
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
