#include <stdio.h>


#define LINHAS 10 // Define o número de linhas do tabuleiro
#define COLUNAS 10 // Define o número de colunas do tabuleiro

int main (){
    int tabuleiro[LINHAS][COLUNAS] = {0}; // Inicializa o tabuleiro com zeros
    

    printf( "Tabuleiro de Batalha Naval \n");
    printf("  "); // Espaço para o canto superior esquerdo
    for (int i = 0; i < 10; i++){ //
        printf(" %c ", LINHAS[i]); // Imprime a primeira linha com letras A-J

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
    int navio2I = 5; // Posição inicial do navio 2 na linha
    int navio2J = 3; // Posição inicial do navio 2 na coluna
    int MovimentoNavio2 = 3; // Tamanho do navio 2

    for (int i = 0; i < MovimentoNavio2; i++){
     tabuleiro[navio2J + i][navio2I] = 3; // Marca a posição do navio 2 no tabuleiro

    }

    // exbindo o tabuleiro com o navio 1 e 2 posicionados
    printf("Tabuleiro de Batalha Naval com Navios Posicionados: \n"); // Exibe o tabuleiro com os navios posicionados
    printf("  "); // Espaço para o canto superior esquerdo  
   
    for (int i = 0; i < 10; i++){
     printf(" %c ", LINHAS[i]); // Imprime a primeira linha com letras A-J

    } for (int i = 0; i < 10; i++){ 
        printf("\n%d ", i);  // Imprime a primeira coluna com números 0-9
    
     for (int j = 0; j < 10; j++){ 
        printf(" %d ", tabuleiro[i][j]); // Imprime o valor atual da célula
     }
    } printf("\n\n"); // Pula uma linha após imprimir o tabuleiro

    // Criando posição do terceiro navio na Diagonal 
    int navio3X = 0; // Posição inicial do navio 3 na linha
    int navio3Y = 0; // Posição inicial do navio 3 na coluna
    int MovimentoNavio3 = 3; // Tamanho do navio 3

    for (int i = 0; i < MovimentoNavio3; i++){
          tabuleiro[navio3X + i][navio3Y + i] = 3; // Marca a posição do navio 3 no tabuleiro
    }

     // Criando posição do quarto navio na Diagonal 
    int navio4X = 0; // Posição inicial do navio 4 na linha
    int navio4Y = 9; // Posição inicial do navio 4 na coluna
    int MovimentoNavio4 = 3; // Tamanho do navio 4

    for (int i = 0; i < MovimentoNavio4; i++){
          tabuleiro[navio4X + i][navio4Y - i] = 3; // Marca a posição do navio 4 no tabuleiro
    }

        // Tabuleiro finaol com os 4 navios posicionados
        printf("Tabuleiro de Batalha Naval com os 4 Navios Posicionados: \n"); // Exibe o tabuleiro com os navios posicionados
        printf("  "); // Espaço para o canto superior esquerdo  
       
        for (int i = 0; i < 10; i++){
         printf(" %c ", LINHAS[i]); // Imprime a primeira linha com letras A-J
    
        } for (int i = 0; i < 10; i++){ 
            printf("\n%d ", i);  // Imprime a primeira coluna com números 0-9
        
         for (int j = 0; j < 10; j++){ 
            printf(" %d ", tabuleiro[i][j]); // Imprime o valor atual da célula
         }
        } printf("\n\n"); // Pula uma linha após imprimir o tabuleiro

        // forma do cone, usando o numero 1
    // definir a base da linha, coluna e a altura do cone

    int baseLinha = 9; // posição linha
    int baseColuna = 2; // posição coluna
    int alturaCone = 3; // altura

    for (int i = 0; i < alturaCone; i++) {
        int linha = baseLinha - i;
        int largura = alturaCone - i - 1; // vai diminuindo quando sobe
        int inicio = baseColuna - largura;
        int fim = baseColuna + largura;

        if (linha < 0) break;
        if (inicio < 0) inicio = 0;
        if (fim > 9) fim = 9;

        for (int j = inicio; j <= fim; j++) {
            if (tabuleiro[linha][j] == 0) {
                tabuleiro [linha][j] = 1; // numero para forma do cone
            }
        }
    }

    
    // forma de cruz, usando o numero 2
        // Definição da Cruz (valor 3)
    
        int cruz[5][5] = {0}; // Matriz da habilidade cruz
        for (int i = 0; i < 5; i++) {
            cruz[2][i] = 1; // Linha do meio
            cruz[i][2] = 1; // Coluna do meio
        }
    
        // Origem da cruz no tabuleiro (linha, coluna)
        int cruzLinha = 2;
        int cruzColuna = 4;

        
    // Aplicar a cruz no tabuleiro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int linhaTab = cruzLinha - 2 + i;
            int colunaTab = cruzColuna - 2 + j;

            if (linhaTab >= 0 && linhaTab < LINHAS && colunaTab >= 0 && colunaTab < COLUNAS) {
                if (cruz[i][j] == 1) {
                    tabuleiro[linhaTab][colunaTab] = 3;
                }
            }
         
        }
    
    }


    // cabeçalho
    printf("Tabuleiro de Batalha Naval com Habilidades especiais e áreas de efeito: \n"); // Exibe o tabuleiro com os navios posicionados
    printf("  "); // Espaço para o canto superior esquerdo  
       
    for (int i = 0; i < 10; i++){
     printf(" %c ", LINHAS[i]); // Imprime a primeira linha com letras A-J

    } for (int i = 0; i < 10; i++){ 
        printf("\n%d ", i);  // Imprime a primeira coluna com números 0-9
    
     for (int j = 0; j < 10; j++){ 
        printf(" %d ", tabuleiro[i][j]); // Imprime o valor atual da célula
     }

    } 
    printf("\n\n"); // Pula uma linha após imprimir o tabuleiro

     

    return 0; // fim do código
}

