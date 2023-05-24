#ifndef PUSH_H
# define PUSH_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
//# include "42Libft-125-main/libft.h"

typedef struct s_list
{
	int			content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstlast(t_list *lst);
int	ft_atoi(const char *str);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
int     lstpop(t_list *stack);

#endif