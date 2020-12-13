#ifndef PHILOSOPHERS_PHILO_ONE_H
#define PHILOSOPHERS_PHILO_ONE_H

# define TAKEN_FORK 0
# define EATING 1
# define SLEEPING 2
# define THINKING 3

typedef struct	s_info {
	int	number_of_p;
	int	ttd;
	int	tte;
	int	tts;
	int	number_of_meals;
}				t_info;

int		get_options(int argv, char *args[], t_info *info);
void	print_usage();

#endif
