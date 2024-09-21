#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i = 1;
    int opcao;

    printf("Quais das peças deseja mover?\n");
    printf("1. Bispo?\n");
    printf("2. Torre?\n");
    printf("3. Rainha?\n");
    printf("4. Cavalo? \n");
    printf("Selecione o número da opção que deseja:\n");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("O bispo movimenta-se 5 casas na diagonal superior direita:\n");
    } else if (opcao == 2)
    {
        printf("A torre movimenta-se 5 casas para a direita\n");
    } else if (opcao == 3)
    {
        printf("A rainha movimenta-se 8 casas para a esquerda\n");
    } else if (opcao == 4)
    {
        printf("O cavalo movimenta-se em L\n");

    } else
    {
        printf("você selecionou nenhuma das opções\n");
    }

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    switch (opcao)
    {
        case 1:
               while( i <= 5) {
                     printf("direita, cima\n");
                     i++;
               }
        break;
        case 2:
               do 
               {
                     printf("direita\n");
                     i++;
                     } while ( i <= 5);
        break;
        case 3:
               for (int i = 1; i <= 8; i++)
              {
                  printf("esquerda\n");
              }
        break;
        case 4:
               for (int i = 1; i < 2; i++)
               {
                printf("baixo\n");
                printf("baixo\n");
                      while (i <= 3)
                      {
                        printf("esquerda\n");
                        i++;
                      }
               }

        break;      
        default:
                printf("Erro! Tente novamente.\n");
        break;
    }

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

    return 0;
}
