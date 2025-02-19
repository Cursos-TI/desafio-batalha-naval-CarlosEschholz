#include <stdio.h>

int main() {
    //dimenções do tabuleiro e tamanho do navio
    int tamanhoTabuleiro[10][10]; 
    int tamanhoNavio = 3;
    // Coordenadas dos navios (x, y)
    int navio_y[tamanhoNavio][2];
    int navio_x[tamanhoNavio][2];

    // Posições iniciais (definidas no código)
    int x_inicio_vertical = 3, y_inicio_vertical = 2;  // Exemplo: começa em (3,2)
    int x_inicio_horizontal = 6, y_inicio_horizontal = 5; // Exemplo: começa em (6,5)

    // Posiciona o navio vertical (mesmo x, y aumenta)
    for (int i = 0; i < tamanhoNavio; i++) {
        navio_x[i][0] = x_inicio_vertical;
        navio_x[i][1] = y_inicio_vertical + i;
    }

    // Posiciona o navio horizontal (mesmo y, x aumenta)
    for (int i = 0; i < tamanhoNavio; i++) {
        navio_y[i][0] = x_inicio_horizontal + i;
        navio_y[i][1] = y_inicio_horizontal;
    }

    // Exibe as coordenadas dos navios
    printf("\nNavio Horizontal:\n");
    for (int i = 0; i < tamanhoNavio; i++) {
        printf("(%d, %d)\n", navio_y[i][0], navio_y[i][1]);
    }
    printf("-----------------------------------------------\n");
    printf("Navio Vertical:\n");
    for (int i = 0; i < tamanhoNavio; i++) {
        printf("(%d, %d)\n", navio_x[i][0], navio_x[i][1]);
    }


    return 0;
}
