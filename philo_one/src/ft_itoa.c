#include <stdlib.h>

static int	ft_length(long n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	long 	nbr;
	char	*str;
	char 	*tmp;

	nbr = n;
	len = ft_length(n);
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	tmp = str;
	*(tmp + len--) = '\0';
	if (nbr == 0)
		*tmp = '0';
	if (nbr < 0)
	{
		nbr *= -1;
		*tmp++ = '-';
	}
	while (nbr != 0)
	{
		*(tmp++ + len--) = '0' + (nbr % 10);
		nbr /= 10;
	}
	return (str);
}