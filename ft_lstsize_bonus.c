/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:09:54 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/13 04:02:34 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cnt;
	t_list	*node;

	cnt = 0;
	node = lst;
	while (node != NULL)
	{
		node = node->next;
		cnt++;
	}
	return (cnt);
}
/*int main ()
{
  t_list *lst;

  lst = ft_lstnew((void *)5);
  ft_lstadd_front(&lst, ft_lstnew((void *)6));
  ft_lstadd_front(&lst, ft_lstnew((void *)7));
  ft_lstadd_front(&lst, ft_lstnew((void *)8));
  ft_lstadd_front(&lst, ft_lstnew((void *)9));
  printf("List count is : %d\n", ft_lstsize(lst));
}*/
