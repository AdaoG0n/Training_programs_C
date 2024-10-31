#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    double resultado;
    int erro; // 0 se não houver erro, 1 se houver
} ResultadoDivisao;

// Declaração de funções
double soma(double a, double b);
double subtracao(double a, double b);
double multiplicacao(double a, double b);
ResultadoDivisao divisao(double a, double b);
double potencia(double base, int exp);
double raiz_quadrada(double num);
int fatorial(int n);

#endif

