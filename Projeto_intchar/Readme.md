
Para ft_atoi (string para inteiro):

    Tratamento de espaços em branco iniciais
    Lidar com sinais (+ ou -)
    Conversão de caracteres numéricos para valores inteiros
    Lidar com overflow (números muito grandes)
    Parar a conversão quando encontrar um caractere não numérico
    Considerar diferentes bases numéricas (opcional, dependendo dos requisitos)

Para ft_itoa (inteiro para string):

    Determinar o tamanho necessário para a string resultante
    Alocação dinâmica de memória para a string
    Lidar com números negativos
    Converter dígitos individuais para caracteres
    Inserir os caracteres na ordem correta na string
    Adicionar o caractere nulo de terminação
    Lidar com o caso especial do zero

Pontos gerais a considerar:

    Gestão de memória (especialmente para ft_itoa)
    Tratamento de casos extremos (INT_MIN, INT_MAX)
    Eficiência do algoritmo
    Conformidade com as normas de codificação da Escola 42Z


projeto_intchar/
│
├── src/
│   ├── main.c
│   ├── ft_atoi.c
│   ├── ft_itoa.c
│   ├── ft_bzero.c
│   ├── ft_calloc.c
│   └── get_num_len.c
│	
├── include/
│   └── intchar.h
│
├── obj/
│   (pasta vazia para arquivos objeto)
│
├── Makefile
│
└── README.md


