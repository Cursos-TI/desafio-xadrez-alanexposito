#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    
    int mov_Torre, mov_Rainha, mov_Bispo;
    int menu1;
    char torre_lado [10], bispo_lado [15], rainha_lado [10];
    int torre_casas, bispo_casas, rainha_casas;
    
    do
    {
        //Menu para escolha da peça a ser mivimentada.
        printf("\nQual peça deseja movimentar?\n");
        printf("1 - Torre.\n");
        printf("2 - Bispo.\n");
        printf("3 - Rainha.\n");
        printf("4 - Sair.\n");
        scanf("%i", &menu1);
        
        //Usei um Switch para fazer o menu funcionar dependendo da escolha do usuario.
        switch (menu1)
        {
            //O Usuario tem a liberdade de escolher o lado e a quantidade de casas que a peça mivimentará.
            //Case 1 é a Torre. Foi usado FOR. 
            case 1:
                printf("\nQual lado deseja movimentar? Digite Esquerda ou Direita.\n");
                scanf("%s", torre_lado);
                printf("Quantas casas deseja andar?\n");
                scanf("%i", &torre_casas);
                printf("A TORRE está se movimentando %i casas para a %s\n", torre_casas, torre_lado);
           
                    for (int i = 0; i < torre_casas; i++)
                    {
                        printf("%s.\n", torre_lado);
                    } 
                    break;
            //Case 2 foi usado While.
            case 2:

                printf("\nQual lado deseja movimentar? Digite Esquerda ou Direita.\n");
                printf("Para diagonal digite esquerda,cima ou direita,baixo SEM ESPACO.\n");
                scanf("%s", bispo_lado);
                printf("Quantas casas deseja andar?\n");
                scanf("%i", &bispo_casas);

                //É necessario zerar (dar um reset) na variável mov_bispo, se não toda vez que rodar 
                //vai acumulando os valores.
                mov_Bispo = 0;
                printf("Bispo está se movimentando %i casas para %s\n", bispo_casas, bispo_lado);
                    while (mov_Bispo < bispo_casas)
                    {
                    printf("%s.\n", bispo_lado);
                    mov_Bispo++;
                    }
                    
                    break;
            
            case 3:        
                
                printf("\nQual lado deseja movimentar? Digite Esquerda ,Direita, Cima ou Baixo.\n");
                scanf("%s", rainha_lado);
                printf("Quantas casas deseja andar?\n");
                scanf("%i", &rainha_casas);

                //É necessario zerar (dar um reset) na variável mov_rainha, se não toda vez que rodar 
                //vai acumulando os valores.
                mov_Rainha = 0;
                printf("Rainha está se movimentando %i casas para %s\n", rainha_casas, rainha_lado);
                    do
                    {
                        printf("%s.\n", rainha_lado);
                        mov_Rainha ++;
                    } while (mov_Rainha < rainha_casas);
                    break;
            // Case 4 é apenas para simular a saida do jogo.
            case 4:
                printf("Saindo...");
                break;
    //default caso o usuario digite algum número deiferente das opções disponiveis.
    default:
        printf("Opcao invalida\n");
        break;
    }
    // O While do menu principal mantém o programa rodando. Se o usuário digitar 4, 
    // a condição torna-se falsa e o loop encerra, fechando o programa. 
    } while (menu1 != 4);

    
    
     /*   printf("\nMovimentando o BISPO 5 vezes para a diagonal (Cima, Direita).\n");
        
        while (mov_Bispo < 5)
    {
        
        printf("Cima, Direita.\n");
        mov_Bispo++;
    } 
    
        printf("\nMovimentando a RAINHA 8 vezes para a esquerda.\n");
    
        do
    {
       printf("Esquerda.\n");
        mov_Rainha ++;
    }   while (mov_Rainha < 8);*/
    


    return 0;
}

// Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.