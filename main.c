/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:29:33 by ebouali           #+#    #+#             */
/*   Updated: 2025/06/08 14:29:35 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	t_stack *current = stack;
	while (current != NULL)
	{
		ft_printf("%d ", current->value);  // Remplace `value` par le nom du champ qui contient la valeur
		current = current->next;
	}
	ft_printf("\n");
}


static void push_swap(t_stack **stack_a, t_stack **stack_b, char *argv[], bool two_argc)
{
  if (is_stack_sorted(*stack_a))
      free_all(stack_a, argv, two_argc);
  else if (stack_len(*stack_a) == 2)
      swap_a(stack_a);
  else if (stack_len(*stack_a) == 3)
      three_stack_sort(stack_a);
  else if (stack_len(*stack_a) == 4 || stack_len(*stack_a) == 5)
      five_stack_sort(stack_a, stack_b);
  else
      long_stack_sort(stack_a, stack_b);
  //free_all(stack_a, argv, two_argc);
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
  char **args;
  bool two_argc;

	stack_a = NULL;
	stack_b = NULL;
  two_argc = false;
  if (argc == 1 || (argc == 2 && !argv[1][0]))
      return (1);
  if (argc == 2)
{
	args = ft_split(argv[1], ' ');
	two_argc = true;
}
else
	args = argv + 1;
  stack_init(&stack_a, args, two_argc);
  push_swap(&stack_a, &stack_b, args, two_argc);
  print_stack(stack_a);
  free_stack(&stack_b);
  if (two_argc)
	free_split(args);
	return (0);
}
