#include "lib.h"
#include "philo_one.h"

int get_options(int argv, char *args[], t_info *info)
{
	if (argv < 4 || argv > 7)
		return (1);
	info->number_of_p = ft_atoi(args[1]);
	info->ttd = ft_atoi(args[2]);
	info->tte = ft_atoi(args[3]);
	info->tts = ft_atoi(args[4]);
	if (argv == 6)
	{
		info->number_of_meals = ft_atoi(args[5]);
		if (info->number_of_meals <= 0 || info->number_of_meals > 1000000)
			return (1);
	}
	if (info->ttd <= 0 || info->ttd > 1000000)
		return (1);
	if (info->tte <= 0 || info->tte > 1000000)
		return (1);
	if (info->tts <= 0 || info->tts > 1000000)
		return (1);
	return (0);
}

