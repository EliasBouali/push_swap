/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:31:09 by ebouali           #+#    #+#             */
/*   Updated: 2025/06/08 14:31:11 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	*stack = (*stack)->next;
	first->next = NULL;
	last = *stack;
	while (last->next)
	{
		last = last->next;
	}
	last->next = first;
}

void	rotate_a(t_stack **first_stack)
{
	rotate(first_stack);
}

void	rotate_b(t_stack **seconde_stack)
{
	rotate(seconde_stack);
}

void	rotate_both(t_stack **first_stack, t_stack **seconde_stack)
{
	rotate(first_stack);
	rotate(seconde_stack);
}
