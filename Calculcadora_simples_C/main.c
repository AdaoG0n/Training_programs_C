#include "calculadora.h"

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void imprimir_numero(double num, int is_resultado) {
    if (is_resultado && num != (int)num) {
        printf("%.2f", num);
    } else if (num == (int)num) {
        printf("%d", (int)num);
    } else {
        printf("%.2f", num);
    }
}

int main() {
    char input1[100], input2[100];
    double num1, num2, resultado;
    char operacao;
    int continuar = 1;

    printf("Bem-vindo à Calculadora!\n");

    while (continuar) {
        printf("\nOperações disponíveis:\n");
        printf("1 : Soma\n");
        printf("2 : Subtração\n");
        printf("3 : Multiplicação\n");
        printf("4 : Divisão\n");
        printf("5 : Potência\n");
        printf("6 : Raiz Quadrada\n");
        printf("7 : Fatorial\n");
        printf("q : Sair\n");

        printf("\nEscolha uma operação: ");
        scanf(" %c", &operacao);

        if (operacao == 'q') {
            printf("Obrigado por usar a Calculadora. Até logo!\n");
            break;
        }

        if (operacao != '6' && operacao != '7') {
            printf("Digite o primeiro número: ");
            scanf("%s", input1);
            num1 = atof(input1);
            printf("Digite o segundo número: ");
            scanf("%s", input2);
            num2 = atof(input2);
        } else {
            printf("Digite um número: ");
            scanf("%s", input1);
            num1 = atof(input1);
        }

        switch(operacao) {
            case '1':
                resultado = soma(num1, num2);
                imprimir_numero(num1, 0);
                printf(" + ");
                imprimir_numero(num2, 0);
                printf(" = ");
                imprimir_numero(resultado, 1);
                printf("\n");
                break;
            case '2':
                resultado = subtracao(num1, num2);
                imprimir_numero(num1, 0);
                printf(" - ");
                imprimir_numero(num2, 0);
                printf(" = ");
                imprimir_numero(resultado, 1);
                printf("\n");
                break;
            case '3':
                resultado = multiplicacao(num1, num2);
                imprimir_numero(num1, 0);
                printf(" * ");
                imprimir_numero(num2, 0);
                printf(" = ");
                imprimir_numero(resultado, 1);
                printf("\n");
                break;
            case '4': {
                ResultadoDivisao res = divisao(num1, num2);
                if (res.erro) {
                    printf("Erro: Divisão por zero\n");
                } else {
                    imprimir_numero(num1, 0);
                    printf(" / ");
                    imprimir_numero(num2, 0);
                    printf(" = ");
                    imprimir_numero(res.resultado, 1);
                    printf("\n");
                }
                break;
            }
            case '5':
                resultado = potencia(num1, (int)num2);
                imprimir_numero(num1, 0);
                printf(" ^ ");
                imprimir_numero(num2, 0);
                printf(" = ");
                imprimir_numero(resultado, 1);
                printf("\n");
                break;
            case '6':
                resultado = raiz_quadrada(num1);
                printf("Raiz quadrada de ");
                imprimir_numero(num1, 0);
                printf(" = ");
                imprimir_numero(resultado, 1);
                printf("\n");
                break;
            case '7':
                if (num1 < 0 || num1 != (int)num1) {
                    printf("Erro: Fatorial só é definido para inteiros não negativos\n");
                } else {
                    int res_fat = fatorial((int)num1);
                    printf("Fatorial de ");
                    imprimir_numero(num1, 0);
                    printf(" = %d\n", res_fat);
                }
                break;
            default:
                printf("Operação inválida\n");
        }

        printf("\nDeseja continuar? (1 para sim, 0 para não): ");
        scanf("%d", &continuar);
        limpar_buffer();
    }

    return 0;
}
