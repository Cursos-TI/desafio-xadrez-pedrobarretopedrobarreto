#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void torre(int n2)
{
    if (n2 > 0)
    {
        printf("Direita\n");
        torre(n2 - 1);
    }
}

void rainha(int n3)
{
    if(n3 > 0)
    {
        printf("esquerda\n");
        rainha(n3 - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i = 1;
    int opcao;
    int quantidadetorre = 5;
    int quantidaderainha = 8;

    printf("Quais das peças deseja mover?\n");
    printf("1. Bispo?\n");
    printf("2. Torre?\n");
    printf("3. Rainha?\n");
    printf("4. Cavalo?\n");
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
        printf("O cavalo movimenta-se em L três para cima depois duas para direita\n");

    } else
    {
        printf("Você selecionou nenhuma das opções\n");
    }


    switch (opcao)
    {
        case 1:
               for (int j = 1; j <= 5; j++)
               {
                   printf("direita\n");

                   i = 1;

               while( i <= 1) {
                     printf("cima\n");
                     i++;
               
               }
            if (j == 6){
            break;
            }
        }
        break;
        case 2:
               torre(quantidadetorre);
        break;
        case 3:
               rainha(quantidaderainha);
        break;
        case 4:
               for(int k = 1, l = 1; k <= 5; k++, l++)
               {
                if (k <=3 )
                {
                    printf("cima\n");
                } else if (l == 4 || l == 5 )
                {
                    printf("direita\n");

                }
               }
        break;      
        default:
                printf("Erro! Tente novamente.\n");
        break;
    }

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

    return 0;
}
