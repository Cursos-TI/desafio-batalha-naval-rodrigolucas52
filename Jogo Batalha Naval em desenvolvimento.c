#include <stdio.h>

int main (){
     char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10]; // Inicializa o tabuleiro com zeros
    

    printf( "Tabuleiro de Batalha Naval \n");
    printf("  "); // Espaço para o canto superior esquerdo
    for (int i = 0; i < 10; i++){
        printf(" %c ", linha[i]); // Imprime a primeira linha com letras A-J

    } for (int i = 0; i < 10; i++){ 
        printf("\n%d ", i); // Imprime a primeira coluna com números 0-9
       
        for (int j = 0; j < 10; j++){ 
            tabuleiro [i][j] = 0; // Inicializa o tabuleiro com zeros
            printf(" %d ", tabuleiro[i][j]); // Imprime o valor atual da célula
        }
    } printf("\n\n"); // Pula uma linha após imprimir o tabuleiro 
    

 // Criando posição do primeiro navio na Horizontal
    int navio1Coluna = 2; // Coluna inicial do navio 1
    int navio1Linha = 2; // Linha inicial do navio 1
    int MovimentoNavio1 = 3; // Tamanho do navio 1
 
    for (int i = 0; i < MovimentoNavio1; i++){
     tabuleiro[navio1Linha][navio1Coluna + i] = 3; // Marca a posição do navio 1 no tabuleiro
     
    }
     
    // Criando posição do segundo navio na Vertical
    int navio2I = 6; // Posição inicial do navio 2 na linha
    int navio2J = 3; // Posição inicial do navio 2 na coluna
    int MovimentoNavio2 = 3; // Tamanho do navio 2

    for (int i = 0; i < MovimentoNavio2; i++){
     tabuleiro[navio2J + i][navio2I] = 3; // Marca a posição do navio 2 no tabuleiro

    }

    // exbindo o tabuleiro com o navio 1 e 2 posicionados
    printf("Tabuleiro de Batalha Naval com Navios Posicionados: \n"); // Exibe o tabuleiro com os navios posicionados
    printf("  "); // Espaço para o canto superior esquerdo  
   
    for (int i = 0; i < 10; i++){
     printf(" %c ", linha[i]); // Imprime a primeira linha com letras A-J

    } for (int i = 0; i < 10; i++){ 
        printf("\n%d ", i);  // Imprime a primeira coluna com números 0-9
    
     for (int j = 0; j < 10; j++){ 
        printf(" %d ", tabuleiro[i][j]); // Imprime o valor atual da célula
     }
    } printf("\n\n"); // Pula uma linha após imprimir o tabuleiro


}