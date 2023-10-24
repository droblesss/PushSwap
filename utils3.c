/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:00:19 by drobles           #+#    #+#             */
/*   Updated: 2023/10/24 19:08:47 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

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

	nodo = (t_list *)malloc(sizeof(t_list));
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
