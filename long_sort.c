/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:29:24 by ebouali           #+#    #+#             */
/*   Updated: 2025/06/08 14:29:26 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	long_stack_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	max_value;
	int	max_bits;
	int	i;
	int	j;
	int	len;
	int	num;

	max_value = get_max_value(*stack_a);
	len = stack_len(*stack_a);
	max_bits = 0;
	while ((max_value >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < len)
		{
			num = (*stack_a)->value;
			if (((num >> i) & 1) == 0)
				push(stack_a, stack_b);
			else
				rotate(stack_a);
			j++;
		}
		while (*stack_b)
			push(stack_b, stack_a);
		i++;
	}
}
