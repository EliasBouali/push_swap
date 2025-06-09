/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:30:22 by ebouali           #+#    #+#             */
/*   Updated: 2025/06/08 14:30:24 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(t_stack **first_stack, char **argv, bool two_argc)
{
	int		i;
	long	value;

	if (!first_stack || !argv)
		return ;
	i = 0;
	while (argv[i])
	{
		if (!is_number(argv[i]))
			free_all(first_stack, argv, two_argc);
		value = ft_atoi(argv[i]);
		if (is_double(*first_stack, value))
			free_all(first_stack, argv, two_argc);
		if (value > INT_MAX || value < INT_MIN)
			free_all(first_stack, argv, two_argc);
		add_node(first_stack, (int)value);
		i++;
	}
}
