/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:09:21 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/12 19:25:53 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int	main()
{
	t_list	*lst;

	lst = ft_lstnew((void *)5);
	ft_lstadd_front(&lst, ft_lstnew((void *)4));
	while (lst)
	{
		printf("%d\n", (int)lst->content);
		lst = lst->next;
	}
}*/
