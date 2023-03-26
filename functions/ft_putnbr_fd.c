/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:52:26 by atarchou          #+#    #+#             */
/*   Updated: 2023/03/26 21:00:38 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <limits.h>
#include <unistd.h>*/
#include"../include/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long long	nb;

	nb = (long long)n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		c = '0' + nb % 10;
	}
	else
		c = '0' + nb;
	write(fd, &c, 1);
}

/*int	main(int argc, char **argv)
{
	int fd;

	if (argc == 2)
	{
		ft_putnbr_fd(INT_MIN, fd);
	}
	return 0;
}*/
