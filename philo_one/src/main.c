#include "philo_one.h"

int main(int argv, char *args[])
{
	t_info info;

	if (get_options(argv, args, &info) != 0)
	{
		print_usage();
		return (1);
	}
	return (0);
}
