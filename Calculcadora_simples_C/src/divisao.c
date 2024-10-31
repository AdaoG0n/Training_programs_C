#include "calculadora.h"

ResultadoDivisao divisao(double a, double b)
{
	ResultadoDivisao res = {0.0, 0};
	if (fabs(b) < DBL_EPSILON) // Verifica se b é muito próximo de zero
	{
		res.erro = 1;
	}
	else
	{
		res.resultado = a / b;
	}
	return (res);
}
