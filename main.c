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
  free_all(stack_a, argv, two_argc);
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
  bool two_argc;

	stack_a = NULL;
	stack_b = NULL;
  two_argc = false;
  if (argc == 1 || (argc == 2 && !argv[1][0]))
      return (1);
  if (argc == 2)
  {
    argv = ft_split(argv[1], ' ');
    two_argc = true;
  }
  stack_init(&stack_a, argv + 1, two_argc);
  push_swap(&stack_a, &stack_b, argv, two_argc);
  free_stack(&stack_b);
	return (0);
}
