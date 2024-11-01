#include "intchar.h"

char	*ft_itoa(int n)
{
	char		*str;
	int		len;
	unsigned int	num;

	len = get_num_len(n);
	str = ft_calloc(len +1, sizeof(char));
	if (!str)
		return(NULL);
	if (n < 0)
		num = -n;
	else
		num = n;
	while (len > 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
