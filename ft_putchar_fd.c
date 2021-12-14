/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:50:06 by abel-oua          #+#    #+#             */
/*   Updated: 2021/12/14 13:53:45 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <fcntl.h>


void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main()
{
	int	fd;

	fd = open();
}