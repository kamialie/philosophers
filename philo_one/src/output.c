#include <stdio.h>
#include <pthread.h>
#include "philo_one.h"
#include "lib.h"

void print_usage()
{
	ft_putstr("usage: philo_one number_of_philosophers time_to_die time_to_eat "
			  "time_to_sleep [number_of_times_each_philosopher_must_eat]\n");
}

void print_status(int status, char *name, pthread_mutex_t *output)
{

	pthread_mutex_lock(output);
	ft_putstr("object ");
	ft_putstr(name);
	if (status == TAKEN_FORK)
		ft_putstr(" has taken a fork\n");
	else if (status == EATING)
		ft_putstr(" is eating\n");
	else if (status == SLEEPING)
		ft_putstr(" is sleeping\n");
	else if (status == THINKING)
		ft_putstr(" is thinking\n");
	else
		ft_putstr(" died\n");
	pthread_mutex_unlock(output);
}
