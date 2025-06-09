/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:30:52 by ebouali           #+#    #+#             */
/*   Updated: 2025/06/08 14:30:55 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack **src, t_stack **dest)
{
	t_stack	*temp;

	if (src == NULL || (*src) == NULL)
		return ;
	temp = *src;
	*src = (*src)->next;
	temp->next = *dest;
	*dest = temp;
}

void	push_b(t_stack **first_stack, t_stack **seconde_stack)
{
	push(first_stack, seconde_stack);
}
void	push_a(t_stack **seconde_stack, t_stack **first_stack)
{
	push(seconde_stack, first_stack);
}
