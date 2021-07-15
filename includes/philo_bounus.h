/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bounus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:21:00 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/07/15 17:21:02 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_BONUS_H
# define PHILO_BONUS_H

# include <sys/time.h>
# include <sys/wait.h>
# include <signal.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <pthread.h>
# include <semaphore.h>
# include <fcntl.h>
# include <sys/stat.h>

typedef struct s_data
{
	int				num_of_philos;
	int 			time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				num_of_times_each_philo_must_eat;
	int				is_dead;
	int				is_all_fed_up;
	struct timeval	start_time;
	sem_t			*forks;
	sem_t			*sem_meal;
}	t_data;

typedef struct s_philo
{
	int				philo_index;
	int				left_fork;
	int				right_fork;
	struct timeval	last_time_meal;
	int				num_of_times_eat;
	pthread_t		philo_thread;
	t_data			*connect_data;
} t_philo;

void	philo_parser_bonus(int argc, char **argv, t_data *data);
int		ft_atoi(const char *str);

#endif
