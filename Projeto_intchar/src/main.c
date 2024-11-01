#include "intchar.h"

void test_atoi() {
    char input[100];
    printf("Digite uma string para converter para inteiro (ou 'q' para sair): ");
    while (fgets(input, sizeof(input), stdin)) {
        if (input[0] == 'q' || input[0] == 'Q') {
            break;
        }
        // Remover o newline do final da string
        input[strcspn(input, "\n")] = 0;
        
        int result = ft_atoi(input);
        printf("ft_atoi(\"%s\") = %d\n", input, result);
        printf("Digite outra string (ou 'q' para sair): ");
    }
}

void test_itoa() {
    char input[100];
    printf("Digite um número inteiro para converter para string (ou 'q' para sair): ");
    while (fgets(input, sizeof(input), stdin)) {
        if (input[0] == 'q' || input[0] == 'Q') {
            break;
        }
        // Remover o newline do final da string
        input[strcspn(input, "\n")] = 0;
        
        int num = atoi(input);  // Usando atoi padrão para converter a entrada
        char *result = ft_itoa(num);
        if (result) {
            printf("ft_itoa(%d) = \"%s\"\n", num, result);
            free(result);  // Não esqueça de liberar a memória alocada por ft_itoa
        } else {
            printf("ft_itoa falhou para o número %d\n", num);
        }
        printf("Digite outro número (ou 'q' para sair): ");
    }
}

int main() {
    char choice;
    
    while (1) {
        printf("\nEscolha uma opção:\n");
        printf("1. Testar ft_atoi\n");
        printf("2. Testar ft_itoa\n");
        printf("3. Sair\n");
        printf("Sua escolha: ");
        
        scanf(" %c", &choice);
        getchar();  // Consumir o newline após o scanf
        
        switch (choice) {
            case '1':
                test_atoi();
                break;
            case '2':
                test_itoa();
                break;
            case '3':
                printf("Encerrando o programa. Obrigado!\n");
                return 0;
            default:
                printf("Opção inválida. Por favor, tente novamente.\n");
        }
    }
    
    return 0;
}

