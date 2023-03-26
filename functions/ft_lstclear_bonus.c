/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:12:37 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/13 03:59:52 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*now;

	now = *lst;
	while (now != NULL)
	{
		*lst = now->next;
		del(now->content);
		free(now);
		now = *lst;
	}
}
/*void	del(void *content)
{
	free (content);
}

int	main()
{
	t_list *lst;

  lst = ft_lstnew((void *)10);
  ft_lstadd_front(&lst, ft_lstnew((void *)6));
  ft_lstadd_front(&lst, ft_lstnew((void *)7));
  ft_lstadd_front(&lst, ft_lstnew((void *)8));
  ft_lstadd_front(&lst, ft_lstnew((void *)9));
  ft_lstclear(&lst, del);
	while (lst)
	{
		printf("%d\n", (int)lst->content);
		lst = lst->next;
	}
}*/
