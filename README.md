# Calculadora de Programador

Este programa é uma calculadora simples que permite realizar operações aritméticas básicas e conversões numéricas. A calculadora suporta as seguintes funcionalidades:

## Operações Aritméticas

1. Soma: Permite somar dois números.
2. Subtração: Permite subtrair dois números.
3. Multiplicação: Permite multiplicar dois números.
4. Divisão: Permite dividir dois números. Certifique-se de não dividir por zero, pois isso resultará em um erro.

## Conversões Numéricas

5. Conversões: Permite converter um número decimal para hexadecimal e binário.

## Como usar o programa

1. Execute o programa e você será apresentado a um menu com as opções disponíveis.
2. Escolha a opção desejada digitando o número correspondente.
3. Dependendo da opção escolhida, você será solicitado a inserir um ou dois números para realizar a operação.
4. Após a conclusão da operação, o resultado será exibido.
5. Você terá a opção de retornar ao menu principal pressionando qualquer tecla ou digitar "sair" para encerrar o programa.

## Observações

- O programa foi escrito em C++ e utiliza as bibliotecas `<iostream>`, `<sstream>`, `<iomanip>` e `<bitset>`.
- As funções `decimalParaHexadecimal()`, `hexadecimalParaDecimal()`, `decimalParaBinario()` e `binarioParaDecimal()` são responsáveis pelas conversões numéricas.
- A função principal `main()` controla o fluxo do programa, exibe o menu, solicita a entrada do usuário e realiza as operações de acordo com a escolha.
- Para garantir que acentos sejam exibidos corretamente, a função `setlocale(LC_ALL, "Portuguese")` é utilizada.

Divirta-se usando a calculadora de programador!
