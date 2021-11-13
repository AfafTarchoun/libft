/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:57:42 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/05 10:42:23 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ret;

	ret = (t_list *)malloc(sizeof(t_list));
	if (ret == 0)
		return (NULL);
	ret->content = content;
	ret->next = NULL;
	return (ret);
}
/*int		main(void)
{
	char str[] = "work baliz";
	
	t_list	*elem;
	elem = ft_lstnew((void *)str);
	printf("\n%s\n", elem->content);
}*/
