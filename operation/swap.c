/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:31:18 by ebouali           #+#    #+#             */
/*   Updated: 2025/06/08 14:31:20 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	swap_a(t_stack **first_stack)
{
	swap(first_stack);
}

void	swap_b(t_stack **seconde_stack)
{
	swap(seconde_stack);
}

void	swap_both(t_stack **first_stack, t_stack **seconde_stack)
{
	swap(first_stack);
	swap(seconde_stack);
}
