#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void mover_peça_recursivo(int casas, char lado []){
    if (casas > 0){
        printf("\n%s\n", lado);
        mover_peça_recursivo(casas -1, lado);
    }
}


int main() {
    
    
    int mov_Torre, mov_Rainha, mov_Bispo;
    int menu1;
    char torre_lado [10], bispo_lado [15], rainha_lado [10];
    int torre_casas, bispo_casas, rainha_casas;
    
    do
    {
        //Menu para escolha da peça a ser movimentada.
        printf("\nQual peça deseja movimentar?\n");
        printf("1 - Torre.\n");
        printf("2 - Bispo.\n");
        printf("3 - Rainha.\n");
        printf("4 - Cavalo.\n");
        printf("5 - Sair.\n");
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

                    mover_peça_recursivo(torre_casas, torre_lado);
                    
            //Case 2 foi usado While.
            case 2:

                printf("\nQual lado deseja movimentar? Digite Esquerda ou Direita.\n");
                printf("Para diagonal digite esquerda,cima ou direita,baixo SEM ESPACO.\n");
                scanf("%s", bispo_lado);
                printf("Quantas casas deseja andar?\n");
                scanf("%i", &bispo_casas);
                //Usei o recurso de recursividade para as duas peças, assim economizo bastante linha de código e mantenho o jogo funcional.
                mover_peça_recursivo(torre_casas, torre_lado);
            
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
            //No case 4 tive que usar Loop Aninhado para fazer o movimenta do cavalo, já que preciso 
            //que ele além de ir para cima, vá para algum dos lados. Esquerda ou Direita.
            case 4:        
                int cavalo_casas = 0;
                char cavalo_lado [10];
                
                printf("\nQual lado deseja movimentar? Digite Esquerda ou Direita.\n");
                scanf("%s", cavalo_lado);
                                
                    while (cavalo_casas < 1)
                        {
                        printf("\nCavalo está se movimentando para:\n");
                            for (int i = 0; i < 2; i++)
                                {
                                printf("Cima\n");
                                }
                        printf("%s\n", cavalo_lado);
                        cavalo_casas++;
                        } 
                        
                    break;


            // Case 5 é apenas para simular a saida do jogo.
            case 5:
                printf("Saindo...");
                break;
    //default caso o usuario digite algum número deiferente das opções disponiveis.
    default:
        printf("Opcao invalida\n");
        break;
    }
    // O While do menu principal mantém o programa rodando. Se o usuário digitar 4, 
    // a condição torna-se falsa e o loop encerra, fechando o programa. 
    } while (menu1 != 5);

    
    
   
    return 0;
}

