#ifndef PHILOSOPHERS_PHILO_ONE_H
#define PHILOSOPHERS_PHILO_ONE_H

# include <pthread.h>

# define TAKEN_FORK 0
# define EATING 1
# define SLEEPING 2
# define THINKING 3

typedef struct	s_resources {
	pthread_mutex_t output;
}				t_resources;

typedef struct	s_thread {
	int 		num;
	char 		*name;
	pthread_t	id;
	t_resources *resources;
}				t_thread;

typedef struct	s_info {
	int		number_of_p;
	int		ttd;
	int		tte;
	int		tts;
	int		number_of_meals;
	t_thread 	*threads;
}				t_info;

int		get_options(int argv, char *args[], t_info *info);

/*
** output
*/
void	print_usage();
void	print_status(int status, char *name, pthread_mutex_t *output);

#endif
