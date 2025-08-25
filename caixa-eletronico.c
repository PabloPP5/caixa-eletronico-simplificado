#include <stdio.h>

int main() {
    int qtd, operacao;
    float valor;
    float saldo = 0, totaldeposito = 0, totalsaque = 0;
    float maiordeposito = 0, maiorsaque = 0;

    printf("Quantas operacoes deseja registrar? ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {
        printf("\nOperacao %d\n", i + 1);
        printf("Escolha a operacao (1 = Depositar, 2 = Sacar, 3 = Mostrar saldo): ");
        scanf("%d", &operacao);

        if (operacao == 1) {
            printf("Digite o valor a depositar: r$ ");
            scanf("%f", &valor);
            saldo += valor;
            totaldeposito += valor;
            maiordeposito = (valor > maiordeposito) ? valor : maiordeposito;
        }
        else if (operacao == 2) {
            printf("Digite o valor a sacar: r$ ");
            scanf("%f", &valor);
            saldo >= valor ? (saldo -= valor, totalsaque += valor, maiorsaque = (valor > maiorsaque) ? valor : maiorsaque)
                           : printf("Saldo insuficiente! operacao cancelada.\n");
        }
        else if (operacao == 3) {
            printf("Saldo atual: r$ %.2f\n", saldo);
        }
        else {
            printf("Operacao invalida!\n");
        }
    }

    printf("\n=== Relatorio final ===\n");
    printf("Total depositado: r$ %.2f\n", totaldeposito);
    printf("Total sacado:     r$ %.2f\n", totalsaque);
    printf("Saldo final:      r$ %.2f\n", saldo);
    printf("Maior deposito:   r$ %.2f\n", maiordeposito);
    printf("Maior saque:      r$ %.2f\n", maiorsaque);

    return 0;
}
