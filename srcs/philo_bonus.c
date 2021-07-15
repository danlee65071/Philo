/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:19:46 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/07/15 17:19:47 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo_bounus.h"

int	main(int argc, char **argv)
{
	t_data	data;
	t_philo	philo[200];

	if (argc != 5 && argc != 6)
	{
		printf("Wrong number of arguments!\n");
		return (1);
	}
	philo_parser_bonus(argc, argv, &data);
	return (0);
}
