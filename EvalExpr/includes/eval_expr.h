/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcamila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:35:31 by vcamila           #+#    #+#             */
/*   Updated: 2020/03/15 22:39:36 by vcamila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int			ft_bracket(char **val);
int			ft_star(char **val);
int			ft_sum(char **val);
int			eval_expr(char *str);

#endif
