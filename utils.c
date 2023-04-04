/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 14:50:57 by dreijans      #+#    #+#                 */
/*   Updated: 2023/03/25 17:40:12 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	digit_check(char *c)
{
	int	i;

	i = 0;
	if (c[i] == '-')
		i++;
	while (c[i] != '\0')
	{
		if (!(c[i] >= '0' && c[i] <= '9'))
			return (0);
		i++;
	}
	if (ft_atoi(c) > 2147483647 || ft_atoi(c) < -2147483648)
		terminate(1);
	return (1);
}

int	terminate(int error)
{
	if (error)
	{
		ft_printf("ERROR\n");
		exit (EXIT_FAILURE);
	}
	else
		exit (EXIT_SUCCESS);
}

void	ft_free_strings_array(char **strings)
{
	int	i;

	i = 0;
	while (strings[i] != NULL)
	{
		free (strings[i]);
		i++;
	}
	free(strings);
}
