#include <math.h>
#include <stdio.h>

int main(void) {
    int opcao;
    double numero;
    for (;;) {
        puts("\n1 - Quadrado | 2 - Cubo | 3 - Raiz quadrada | 0 - Sair");
        printf("Escolha: ");
        if (scanf("%d", &opcao) != 1) break;
        if (opcao == 0) break;
        if (opcao < 1 || opcao > 3) {
            puts("Opcao invalida.");
            continue;
        }
        printf("Numero: ");
        if (scanf("%lf", &numero) != 1 || !isfinite(numero)) {
            puts("Numero invalido.");
            break;
        }
        if (opcao == 3 && numero < 0) {
            puts("Nao existe raiz real para numero negativo.");
            continue;
        }
        double resultado = opcao == 1 ? numero * numero : opcao == 2 ? numero * numero * numero : sqrt(numero);
        printf("Resultado: %.2f\n", resultado);
    }
    return 0;
}
