#include "calculadora.h"

double	potencia(double base, int exp)
{
	double	resultado;

	resultado = 1.0;
	if (exp == 0)
		return (1.0);
	if (exp < 0)
	{
		base = 1.0 / base;
		exp = -exp;
	}
	while (exp > 0)
	{
		if ( exp % 2 == 1)
			resultado *= base;
		base *= base;
		exp /= 2;
	}
	return (resultado);
}

