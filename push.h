#ifndef PUSH_H
# define PUSH_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
//# include "Libft/libft.h"
//# include "Ft_printf/libftprintf.h"

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	int				size;
}	t_list;

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
int     lstpop(t_list **stack);
void    ft_print_stack_horizontal(t_list *stack_a, t_list *stack_b);
int		ft_atoi(const char *str);
void	fillA(t_list **stackA, char **argv);
<<<<<<< HEAD
int		ft_isdigit(char src);
=======
int		ft_isdigit(char src);
>>>>>>> refs/remotes/origin/main


//MOVES

void	sa(t_list **stack_a, int ss);
void	sb(t_list **stack_b, int ss);
void	pb(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void 	ss(t_list **stack_a, t_list **stack_b, int ss);
void	ra(t_list **stack_a, int ss);
void	rb(t_list **stack_b, int ss);
void	rr(t_list **stack_a,t_list **stack_b, int ss);
void	rra(t_list **stack_a, int ss);
void	rrb(t_list **stack_b, int ss);

//CHECKERS

void	all_elements_are_numbers(t_list *list);
void	not_repeat(t_list *stack_a);


#endif