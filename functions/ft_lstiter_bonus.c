/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:13:10 by atarchou          #+#    #+#             */
/*   Updated: 2023/03/26 21:00:38 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*now;

	now = lst;
	if (lst == NULL || f == NULL)
		return ;
	while (now != NULL)
	{
		f(now->content);
		now = now->next;
	}
}
/*void f(void *content)
{
  free(content);
}

int main ()
{
  t_list *lst;

  lst = ft_lstnew((void *)10);
  ft_lstadd_front(&lst, ft_lstnew((void *)6));
  ft_lstadd_front(&lst, ft_lstnew((void *)7));
  ft_lstadd_front(&lst, ft_lstnew((void *)8));
  ft_lstadd_front(&lst, ft_lstnew((void *)9));
  printf("1 = %p\n", lst);
  ft_lstiter(lst, f);
  printf("2 = %p\n", lst);
  return (0);
}*/
