/* Desafio Novato Batlha Naval, Thony Barreto */

#include <stdio.h>

#define TAM 10   // tamanho padrão do tabuleiro (10x10)

/*
 Função que recebe um navio e exibe suas coordenadas.
 O navio é representado por um vetor bidimensional,
 onde cada linha contém as coordenadas X e Y de uma parte.
*/
void exibirNavio(int navio[][2], int tamanho, char orientacao) {
    printf("Navio %s (%d partes):\n", 
           (orientacao == 'V' ? "Vertical" : "Horizontal"), tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("  Parte %d -> (X=%d, Y=%d)\n", i + 1, navio[i][0], navio[i][1]);
    }
    printf("\n");
}

int main() {
    // Navio vertical: começa na posição (2,3) e tem 4 partes
    int navioVertical[4][2];
    int x = 2, y = 3;
    for (int i = 0; i < 4; i++) {
        navioVertical[i][0] = x + i; // incrementa o X para formar o navio
        navioVertical[i][1] = y;     // Y permanece fixo
    }

    // Navio horizontal: começa na posição (5,6) e tem 3 partes
    int navioHorizontal[3][2];
    x = 5; y = 6;
    for (int i = 0; i < 3; i++) {
        navioHorizontal[i][0] = x;     // X permanece fixo
        navioHorizontal[i][1] = y + i; // incrementa o Y para formar o navio
    }

    // Exibe os navios posicionados
    exibirNavio(navioVertical, 4, 'V');
    exibirNavio(navioHorizontal, 3, 'H');

    return 0;
}
