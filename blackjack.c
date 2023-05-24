/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blackjack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:59:07 by hnogared          #+#    #+#             */
/*   Updated: 2023/04/01 21:40:21 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	get_value(char *cards, int *total)
{
	while (*cards)
	{
		if (*cards >= '2' && *cards <= '9')
			total[0] += *cards - '0';
		else if (*cards == 'T')
			total[0] += 10;
		else if (*cards == 'J' || *cards == 'D' || *cards == 'K')
			total[0] += 10;
		else if (*cards == 'A')
			total[0] += 11;
		else
		{
			total[0] = -1;
			return ;
		}
		cards++;
	}
}

int	main(int argc, char **argv)
{
	int		total;

	if (argc == 2)
	{
		total = 0;
		get_value(argv[1], &total);
		if (total == -1)
		{
			printf("Invalid cards ! (23456789TJDKA)\n");
			return (0);
		}
		while (*argv[1] && total > 21)
		{
			if (*argv[1]++ == 'A')
				total -= 10;
		}
		if (total == 21)
			printf("Blackjack!\n");
		else
			printf("%d\n", total);
	}
	return (0);
}
