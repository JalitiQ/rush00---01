/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilian <lilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:56:40 by ljullien          #+#    #+#             */
/*   Updated: 2025/06/29 18:34:11 by lilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);

void	ft_putcharall(int i, int j, int x, int y)
{
	if (((i > 0 && i < x - 1) && (j == 0 || j == y - 1))
		|| ((j > 0 && j < y - 1) && (i == 0 || i == x - 1)))
	{
		ft_putchar("*");
	}
	if ((i > 0 && i < x - 1) && (j > 0 && j < y - 1))
	{
		ft_putchar(" ");
	}
	if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
	{
		ft_putchar("\\");
	}
	if ((i == 0 && j == 0) || (i == x - 1 && j == y - 1))
	{
		ft_putchar("/");
	}
}

void	ft_putcharoneline(int i, int x)
{
	if (i == 0)
	{
		ft_putchar("/");
	}
	else if (i == x)
	{
		ft_putchar("\\");
	}
	else if (i < x && i > 0)
	{
		ft_putchar("*");
	}
}

void	ft_putcharonecol(int j, int y, int i)
{
	if (j == 0 && i > 1)
	{
		ft_putchar("/");
	}
	else if (j == y)
	{
		ft_putchar("\\");
	}
	else if (j < y && j > 0)
	{
		ft_putchar("*");
	}
	ft_putchar("\n");
}

void	ft_put11(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar("/");
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = -1;
	while (++j < y)
	{
		if (x == 1 && y == 1)
		{
			ft_put11(x, y);
			break;
		}
		else if (x < 2 && i < y + 1)
			ft_putcharonecol(j, y, i);
		i = -1;
		while (++i < x + 1)
		{
			if (i == x && y > 1)
				ft_putchar("\n");
			if (y > 1 && x > 1)
				ft_putcharall(i, j, x, y);
			if (y < 2 && i < x + 1)
				ft_putcharoneline(i, x);
		}
	}
}
