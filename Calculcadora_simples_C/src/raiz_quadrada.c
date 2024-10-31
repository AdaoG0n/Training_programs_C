#include "calculadora.h"

double raiz_quadrada(double num)
{
    if (num < 0) {
        return -1.0; // Indicando erro para números negativos
    }

    if (num == 0 || num == 1) {
        return num;
    }

    double inicio = 0;
    double fim = num;
    double meio;
    double precisao = 0.0000001; // Ajuste conforme necessário

    while (fim - inicio > precisao) {
        meio = (inicio + fim) / 2;

        if (meio * meio > num) {
            fim = meio;
        } else {
            inicio = meio;
        }
    }

    return meio;
}

