#include <stdio.h>

int main(){

//Criando variáveis

int torre = 1;
int bispo = 1;
int rainha;

//Movimentação da torre (5 casas paara direita)

printf("==================\nMOVIMENTO DA TORRE\n==================\n");

while (torre <= 5)
{
 printf("torre move-se uma casa para direita...\n", torre);
 torre++;
 
}

printf("===================\nMOVIMENTO DO BISPO\n===================\n");

//Movimentação do bispo (5 cadas diagonal)

do
{
    printf("bispo move-se uma casa cima/direita...\n");
    bispo++;

} while (bispo <= 5);

//Movimentação da rainha (8 casas para esquerda)

printf("===================\nMOVIMENTO DA RAINHA\n===================\n");

for (rainha = 1; rainha <= 8; rainha++)
{
    printf("rainha move-se uma casa para esquerda...\n");
}

    return 0;
}