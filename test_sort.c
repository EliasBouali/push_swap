/*#include "push_swap.h"

static void	move_block_to_b(t_stack **stack_a, t_stack **stack_b, int block_min,
		int block_max)
{
	int	len;
	int	i;

	len = stack_len(*stack_a);
	i = 0;
	while (i < len)
	{
		if ((*stack_a)->value >= block_min && (*stack_a)->value < block_max)
		{
			push(stack_a, stack_b);
			if ((*stack_b)->value < (block_min + block_max) / 2)
				rotate(stack_b);
		}
		else
			rotate(stack_a);
		i++;
	}
}

static void	push_max_to_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*max_node;
	int		index;

	while (*stack_b)
	{
		max_node = get_highest_value(*stack_b);
		index = get_value_index(*stack_b, max_node);
		if (index <= stack_len(*stack_b) / 2)
		{
			while (*stack_b != max_node)
				rotate(stack_b);
		}
		else
		{
			while (*stack_b != max_node)
				reverse_rotate(stack_b);
		}
		push(stack_b, stack_a);
	}
}

void	long_stack_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	block_size;
	int	block_min;
	int	block_max;

	index_stack(*stack_a);
	block_size = 15; // Ajuste selon le nombre d'éléments si besoin
	block_min = 0;
	block_max = block_size;
	while (*stack_a)
	{
		move_block_to_b(stack_a, stack_b, block_min, block_max);
		block_min += block_size;
		block_max += block_size;
	}
	push_max_to_a(stack_a, stack_b);
}
*/
