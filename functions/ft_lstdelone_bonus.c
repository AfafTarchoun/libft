/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:12:12 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/13 04:00:28 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*void del(void *content)
{
  free(content);
}

int main ()
{
  t_list *lst;
  t_list *last;
  t_list *head;

  lst = ft_lstnew((void *)10);
  ft_lstadd_front(&lst, ft_lstnew((void *)6));
  ft_lstdelone(lst->next, del);
  while (lst)
  {
    printf("%p\n", lst->content);
    lst = lst->next;
  }
  return (0);
}*/
