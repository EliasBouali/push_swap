/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:29:56 by ebouali           #+#    #+#             */
/*   Updated: 2025/06/08 14:29:58 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

void				add_node(t_stack **stack, int value);
t_stack				*get_last_node(t_stack *stack);
t_stack				*get_smallest_value(t_stack *stack);
int					stack_len(t_stack *stack);
int					is_number(char *str);
int					is_double(t_stack *stack, int value);
bool	is_stack_sorted(t_stack *stack);
int					ft_atoi(const char *nptr);
void				free_stack(t_stack **stack);
void				free_argv(char **argv);
void				free_all(t_stack **stack, char **argv, bool two_argc);
void				stack_init(t_stack **first_stack, char **argv,
						bool two_argc);
void				swap(t_stack **stack);
void				swap_a(t_stack **first_stack);
void				swap_b(t_stack **seconde_stack);
void				swap_both(t_stack **first_stack, t_stack **seconde_stack);
void				push(t_stack **src, t_stack **dest);
void				push_a(t_stack **first_stack, t_stack **seconde_stack);
void				push_b(t_stack **seconde_stack, t_stack **first_stack);
void				rotate(t_stack **stack);
void				rotate_a(t_stack **first_stack);
void				rotate_b(t_stack **seconde_stack);
void				rotate_both(t_stack **first_stack, t_stack **seconde_stack);
void				reverse_rotate(t_stack **stack);
void				reverse_rotate_a(t_stack **first_stack);
void				reverse_rotate_b(t_stack **second_stack);
void				reverse_rotate_both(t_stack **first_stack,
						t_stack **second_stack);
int					get_value_index(t_stack *stack, t_stack *node);
void	three_stack_sort(t_stack **stack);
void				five_stack_sort(t_stack **stack_a, t_stack **stack_b);
t_stack				*get_highest_value(t_stack *stack);
void				index_stack(t_stack *stack);
int					get_max_value(t_stack *stack);
void				long_stack_sort(t_stack **stack_a, t_stack **stack_b);
char	**ft_split(char const *s, char c);
int	ft_print_ptr(void *ptr);
int	ft_count(const char *format, int i, va_list args);
int	ft_printf(const char *format, ...);
int	ft_put_unsigned(unsigned int n);
int	ft_putchar(char c);
int	ft_puthex(unsigned int n, int is_upper);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
void	free_split(char **split);


#endif
