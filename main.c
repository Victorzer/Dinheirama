#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double valor, gastos = 0, salario, saldo;
    char sinal;
    printf("Para comecar, digite o quanto voce recebe: ");
    scanf("%lf", &salario);
    getchar();
    printf("\nDigite o valor recebido (+) ou gasto (-) com o sinal: ");
    while (scanf("%c%lf", &sinal, &valor) != EOF)
    {
        if (sinal == '-') //aumenta gastos
        {
            gastos += valor;
            printf("\nDigite o valor recebido (+) ou gasto (-) com o sinal: ");
        }
        else if (sinal == '+')
        {
            gastos -= valor;
            printf("\nDigite o valor recebido (+) ou gasto (-) com o sinal: ");
        }
        else
        {
            printf("\nSinal invalido!\n");
            printf("\nDigite o valor recebido (+) ou gasto (-) com o sinal: ");
        }
        getchar();
    }
    printf("\nValor total gasto (contando ganhos): %.2lf\n", gastos);
    saldo = salario - gastos;
    printf("Saldo de %.2lf reais: %.2lf\n", salario, saldo);
    return 0;
}
