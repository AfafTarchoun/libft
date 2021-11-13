/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:26:50 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/13 01:07:01 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const	char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	iter[2];
	int		index;
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	iter[0] = 0;
	iter[1] = 0;
	index = -1;
	while (iter[0] <= ft_strlen(s))
	{
		if (s[iter[0]] != c && index < 0)
			index = iter[0];
		else if ((s[iter[0]] == c || iter[0] == ft_strlen(s)) && index >= 0)
		{
			split[iter[1]++] = word_dup(s, index, iter[0]);
			index = -1;
		}
		iter[0]++;
	}
	split[iter[1]] = 0;
	return (split);
}
/*int	main()
{
	char const s[] = "please work";
	char c = ' ';
	printf("%s", *ft_split(s, c));
	return 0;
}*/
