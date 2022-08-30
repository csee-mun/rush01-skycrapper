/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rulescopy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnik-nai <nnik-nai@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:11:33 by nnik-nai          #+#    #+#             */
/*   Updated: 2022/08/28 15:52:11 by nnik-nai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_row_left(int tab[4][4], int pos, int entry[16]);
int	check_row_right(int tab[4][4], int pos, int entry[16]);
int	check_col_up(int tab[4][4], int pos, int entry[16]);
int	check_col_down(int tab[4][4], int pos, int entry[16]);

int	check_case(int tab[4][4], int pos, int entry[16])
{
	if (check_row_left(tab, pos, entry) == 1)
		return (1);
	if (check_row_right(tab, pos, entry) == 1)
		return (1);
	if (check_col_down(tab, pos, entry) == 1)
		return (1);
	if (check_col_up(tab, pos, entry) == 1)
		return (1);
	return (0);
}
