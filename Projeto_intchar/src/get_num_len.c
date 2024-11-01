#include "intchar.h"

int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n != 0)
		len =1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
