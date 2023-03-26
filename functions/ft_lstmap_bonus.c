/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:13:48 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/13 04:02:07 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*new;
	t_list	*result;
	void	*temp;

	if (lst == NULL)
		return (0);
	result = 0;
	while (lst != NULL)
	{
		temp = f(lst->content);
		new = ft_lstnew(temp);
		if (new == NULL)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	new = 0;
	return (result);
}
/*void del(void *content)
{
  free(content);
}

void *f(void *content)
{
  return("abida");
}

int main ()
{
  t_list *lst;

  lst = ft_lstnew((void *)"afaf0");
  ft_lstadd_front(&lst, ft_lstnew((void *)"afaf1"));
  ft_lstadd_front(&lst, ft_lstnew((void *)"afaf2"));
  ft_lstadd_front(&lst, ft_lstnew((void *)"afaf3"));
  ft_lstadd_front(&lst, ft_lstnew((void *)"afaf4"));
  t_list *new = ft_lstmap(lst, f, del);
  while (lst)
  {
    printf("%s\n", (char *)lst->content);
    lst = lst->next;
  }
  while (new)
  {
    printf("%s\n", (char *)new->content);
    new = new->next;
  }
  return(0);
}*/
