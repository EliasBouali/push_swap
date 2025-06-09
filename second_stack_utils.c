/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_stack_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:30:04 by ebouali           #+#    #+#             */
/*   Updated: 2025/06/08 14:30:05 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*copy_value_to_array(t_stack *stack, int len)
{
	int		*array;
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = stack;
	array = malloc(sizeof(int) * len);
	if (!array)
		return (NULL);
	while (tmp)
	{
		array[i++] = tmp->value;
		tmp = tmp->next;
	}
	return (array);
}

static void	sort_array(int *array, int len)
{
	int i, j, tmp;
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
static void	assign_index_to_stack(t_stack *stack, int *array, int len)
{
	int	i;

	while (stack)
	{
		i = 0;
		while (i < len)
		{
			if (stack->value == array[i])
			{
				stack->value = i;
				break ;
			}
			i++;
		}
		stack = stack->next;
	}
}

void	index_stack(t_stack *stack)
{
	int	*value;
	int	len;

	if (!stack)
		return ;
	len = stack_len(stack);
	value = copy_value_to_array(stack, len);
	if (!value)
		return ;
	sort_array(value, len);
	assign_index_to_stack(stack, value, len);
	free(value);
}
