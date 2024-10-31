# <a href="#" style="pointer-events: none;"> <img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square"/></a> <a href="https://github.com/AdaoG0n" style="pointer-events: none;"> <img src="https://img.shields.io/badge/Follow-me?color=%2312bab9&style=flat-square"/></a> • Calculadora simples em linguagem C

###### Um projeto clássico em C para revisar algumas funções e conceitos. 
###### Aqui estão algumas funcionalidades implementadas, que cobrem diversos conceitos e funções:

### Funcionalidades da Calculadora:
1. *Operações Básicas:*
   - Adição
   - Subtração
   - Multiplicação
   - Divisão

2. *Funções Adicionais:*
   - Cálculo de potência (ex: x^y)
   - Cálculo de raiz quadrada
   - Cálculo de fatorial

3. *Interface de Usuário:*
   - Um menu para o usuário escolher a operação.
   - Solicitar entrada de números e operação.

4. *Tratamento de Erros:*
   - Verificar divisões por zero.
   - Validar entradas do usuário.

### Estrutura do Projeto:
- `main.c`: O arquivo principal que contém a lógica do menu e controla o fluxo do programa.
- `calculadora.h`: Um arquivo de cabeçalho com as declarações das funções.
- `calculadora.c`: Um arquivo de implementação que contém as definições das funções de cálculo.


>[!Note]
>###### Este projeto não só ajuda a rever algumas funções básicas, mas também permite praticar a
>###### estruturação de um programa em C, manipulação de dados e tratamento de erros.

### Árvore do projeto

```sh
Calculadora_simples_C/
│
├── include/
│   └── calculadora.h
│
├── src/
│   ├── soma.c
│   ├── subtracao.c
│   ├── multiplicacao.c
│   ├── divisao.c
│   ├── potencia.c
│   ├── raiz_quadrada.c
│   └── fatorial.c
│
├── main.c
└── Makefile
```

### Para compilar
> Dentro da pasta raiz, abra o terminal
> Digite o seguinte comando:
```sh
make
```

### Para executar
> Abra a pasta `bin`
>```
>cd bin
>```

> Execute o seguinte comando:
> ```
> ./calculadora
> ```

### Para usar
> Escolher o tipo de calculo consoante o `menu`. <br/>
> Escrever os numeros para calcular. <br/>
> O resultado será apresentado no terminal.

> [!Note]
> A calculadora consegue lidar com numeros decimais, para isso terá de inserir um `.` ao invés de `,`.
> ###### EX: 1.5
