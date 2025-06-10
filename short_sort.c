/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:30:10 by ebouali           #+#    #+#             */
/*   Updated: 2025/06/08 14:30:12 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_stack_sort(t_stack **stack)
{
	t_stack	*highest_value;

	highest_value = get_highest_value(*stack);
	if ((*stack) == highest_value)
		rotate(stack);
	if ((*stack)->next == highest_value)
		reverse_rotate(stack);
	if ((*stack)->value > (*stack)->next->value)
		swap(stack);
}

void	five_stack_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*min_value;
	int		len_stack_a;
	int		index;

	while (stack_len(*stack_a) > 3)
	{
		len_stack_a = stack_len(*stack_a);
		min_value = get_smallest_value(*stack_a);
		index = get_value_index(*stack_a, min_value);
		if (index <= len_stack_a / 2)
		{
			while (*stack_a != min_value)
				rotate_a(stack_a);
		}
		else
		{
			while (*stack_a != min_value)
				reverse_rotate_a(stack_a);
		}
		push_a(stack_a, stack_b);
	}
	three_stack_sort(stack_a);
	push_b(stack_b, stack_a);
	push_b(stack_b, stack_a);
}
