#include "calculadora.h"

int	fatorial(int n)
{
    	if (n < 0)
        	return (-1); // Indicando erro para números negativos
    	if (n == 0 || n == 1)
        	return (1);  // 0! e 1! são definidos como 1
    	int	resultado = 1;
    	int	i = 2;

	while (i <= n)
    	{
        	resultado *= i;
        	i++;
    	}

    	return (resultado);
}

