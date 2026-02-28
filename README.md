# mini-calculadora-c
Mini calculadora em C com menu interativo e validação básica

# 🔢 Mini Calculadora em C

Projeto simples desenvolvido em linguagem C com menu interativo.

## 🚀 Funcionalidades
- Calcular quadrado
- Calcular cubo
- Calcular raiz quadrada
- Menu interativo
- Tratamento de número negativo (raiz)

## 🛠 Tecnologias
- Linguagem C
- Biblioteca math.h

## ▶️ Como executar

### Compilar
```bash
gcc calculadora.c -o calculadora -lm

#include <stdio.h>
#include <math.h>

// Funções
double quadrado(double n) {
    return n * n;
}

double cubo(double n) {
    return n * n * n;
}

double raiz(double n) {
    if (n < 0) {
        printf("Nao existe raiz real para numero negativo.\n");
        return -1;
    }
    return sqrt(n);
}

int main() {
    double numero;
    int opcao;

    while (1) {
        printf("\nDigite um numero: ");
        scanf("%lf", &numero);

        printf("\n=== MENU ===\n");
        printf("1 - Quadrado\n");
        printf("2 - Cubo\n");
        printf("3 - Raiz quadrada\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando programa...\n");
            break;
        }

        switch (opcao) {
            case 1:
                printf("Quadrado: %.2lf\n", quadrado(numero));
                break;
            case 2:
                printf("Cubo: %.2lf\n", cubo(numero));
                break;
            case 3:
                printf("Raiz: %.2lf\n", raiz(numero));
                break;
            default:
                printf("Opcao invalida.\n");
        }
    }

    return 0;
}
