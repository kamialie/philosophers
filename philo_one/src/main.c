#include <stdlib.h>
#include <stdio.h>
#include "philo_one.h"
#include "lib.h"

void *do_smth(void *in)
{
	int i;
	t_thread *thread;

	i = 1;
	thread = (t_thread *)in;
	while(i++)
	{
		print_status(i % 4, thread->name, &thread->resources->output);
		sleep(2);
	}
	return NULL;
}

t_thread *initialize_threads(int total_number, t_resources *rsc)
{
	int i;
	t_thread *threads;

	i = 0;
	threads = (t_thread *)malloc(sizeof(*threads) * total_number);
	while (i < total_number)
	{
		threads[i].num = i;
		threads[i].name = ft_itoa(i);
		threads[i].resources = rsc;
		printf("created\n");
		pthread_create(&threads[i].id, NULL, do_smth, &threads[i]);
		i++;
	}
	return threads;
}

int main(int argv, char *args[])
{
	t_info info;
	t_resources resources;

	if (get_options(argv, args, &info) != 0)
	{
		print_usage();
		return (1);
	}
	pthread_mutex_init(&(resources.output), NULL);
	info.threads = initialize_threads(info.number_of_p, &resources);
	pthread_join(info.threads[0].id, NULL);
	pthread_mutex_destroy(&resources.output);
	return (0);
}
