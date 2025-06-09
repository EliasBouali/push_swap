/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:31:00 by ebouali           #+#    #+#             */
/*   Updated: 2025/06/08 14:31:02 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
		return ;
	tmp = NULL;
	last = *stack;
	while (last->next)
	{
		tmp = last;
		last = last->next;
	}
	tmp->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	reverse_rotate_a(t_stack **first_stack)
{
	reverse_rotate(first_stack);
}

void	reverse_rotate_b(t_stack **second_stack)
{
	reverse_rotate(second_stack);
}

void	reverse_rotate_both(t_stack **first_stack, t_stack **second_stack)
{
	reverse_rotate(first_stack);
	reverse_rotate(second_stack);
}
