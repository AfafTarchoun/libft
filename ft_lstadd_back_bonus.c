/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:11:32 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/13 00:55:46 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}
/*int	main()
{
	t_list	*lst;

	lst = ft_lstnew((void *)5);
	ft_lstadd_back(&lst, ft_lstnew((void *)4));
	while (lst)
	{
		printf("%d\n", (int)lst->content);
		lst = lst->next;
	}
}*/
