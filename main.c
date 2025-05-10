// ========================================
// Checkpoint 2 - Algoritmos e Programação
// Grupo: Os Sobreviventes
// Nome: Guilherme Califoni - RM: 565157
// Nome: Antonio Lucas - RM: 565516
// Nome: Rafael Silva - RM: 565415
// Nome: Rafael Passo   - RM: 563075
// ========================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Função 1
void Fibonacci() {
    int n;
    do {
        printf("Digite a quantidade de termos da sequencia de Fibonacci (1 a 50): ");
        scanf("%d", &n);
        if (n < 1 || n > 50) {
            printf("Valor invalido. Tente novamente.\n");
        }
    } while (n < 1 || n > 50);

    int fib[50];
    fib[0] = 0;
    if (n > 1) fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Sequencia de Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}

// Função 2
void Fatoriais() {
    int n;
    do {
        printf("Digite um numero inteiro (1 a 20): ");
        scanf("%d", &n);
        if (n < 1 || n > 20) {
            printf("Numero invalido. Tente novamente.\n");
        }
    } while (n < 1 || n > 20);

    long long fat[20];

    for (int i = 0; i < n; i++) {
        fat[i] = 1;
        for (int j = 1; j <= i + 1; j++) {
            fat[i] *= j;
        }
    }

    printf("Fatoriais:\n");
    for (int i = 0; i < n; i++) {
        printf("%d! = %lld\n", i + 1, fat[i]);
    }
}

// Função 3
void VerificarPalindromo() {
    char palavra[101];
    printf("Digite uma palavra: ");
    scanf(" %100s", palavra);

    int i = 0, j = strlen(palavra) - 1;
    int ehPalindromo = 1;

    while (i < j) {
        if (tolower(palavra[i]) != tolower(palavra[j])) {
            ehPalindromo = 0;
            break;
        }
        i++;
        j--;
    }

    if (ehPalindromo) {
        printf("A palavra eh um palíndromo.\n");
    } else {
        printf("A palavra NAO eh um palíndromo.\n");
    }
}

// Função 4
void VerificarSubstring() {
    char textoPrincipal[101], textoPesquisa[101];

    printf("Digite a primeira string: ");
    scanf(" %100[^\n]", textoPrincipal);
    getchar();
    printf("Digite a segunda string: ");
    scanf(" %100[^\n]", textoPesquisa);

    if (strstr(textoPrincipal, textoPesquisa)) {
        printf("A segunda string esta contida na primeira.\n");
    } else {
        printf("A segunda string NAO esta contida na primeira.\n");
    }
}

int main() {
    int opcao;

    do {
        printf("\n===== MENU DE EXERCÍCIOS =====\n");
        printf("1 - Sequência de Fibonacci\n");
        printf("2 - Fatoriais\n");
        printf("3 - Verificar Palíndromo\n");
        printf("4 - Verificar Substring\n");
        printf("0 - Sair\n");
        printf("==============================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                Fibonacci();
                break;
            case 2:
                Fatoriais();
                break;
            case 3:
                VerificarPalindromo();
                break;
            case 4:
                VerificarSubstring();
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        if (opcao != 0) {
            printf("\nPressione Enter para continuar...");
            getchar(); // pausa
        }

    } while (opcao != 0);

    return 0;
}
