#include <stdio.h>

int main()
{
    int lin, col;

    char pecas[7][6]={"vazio",
                      "peao",
                      "cavalo",
                      "torre",
                      "bispo",
                      "rainha",
                      "rei"};

    int result[7]= {0,0,0,0,0,0,0};

    int tab[8][8]={{3,2,4,5,6,4,2,3},
                   {1,1,1,1,1,1,1,1},
                   {0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0},
                   {1,1,1,1,1,1,1,1},
                   {3,2,4,5,6,4,2,3}};

   // printf("\nDigite as posicoes\n\n");
/*
    for(lin = 0; lin < 8; lin++)
    {
        for(col=0; col < 8; col++)
        {
            printf("\nPosicao [%d][%d] = ",lin,col);
            scanf("%d",&tab[lin][col]);
        }
    }
*/
    printf("\n\n\n<<<<<<<<<<<<<<<<<<<SAIDA DE DADOS>>>>>>>>>>>>>>>>>\n\n\n");

  /*  for(lin = 0; lin < 8; lin++)
    {
        for(col=0; col < 8; col++)
        {
            printf("%d ", tab[lin][col]);
        }
        printf("\n");
    }

    for(lin = 0; lin < 8; lin++)
    {
        for(col=0; col < 8; col++){
            if(tab[lin][col] == 0){
                result[0] = result[0]+1;
            }else if(tab[lin][col] == 1){
                result[1] = result[1]+1;
            }else if(tab[lin][col] == 2){
                result[2] = result[2]+1;
            }else if(tab[lin][col] == 3){
                result[3] = result[3]+1;
            }else if(tab[lin][col] == 4){
                result[4] = result[4]+1;
            }else if(tab[lin][col] == 5){
                result[5] = result[5]+1;
            }else if(tab[lin][col] == 6){
                result[6] = result[6]+1;
            }
        }

    }

    printf("\n\nVazio: %d\nPeao: %d\nCavalo: %d\nTorre: %d\nBispo: %d\nRainha %d\nRei: %d",result[0],result[1],result[2],result[3],result[4],result[5],result[6]);
    */
    for(lin = 0; lin < 8; lin++)
    {
        for(col=0; col < 8; col++){
            result[tab[lin][col]]++;
        }
    }

    for(lin=0;lin<7;lin++{
        printf("pecas: %d", pecas);
    })
}






