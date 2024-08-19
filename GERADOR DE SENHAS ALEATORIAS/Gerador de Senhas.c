#include <stdio.h>
#include <stdlib.h>

int main(){

    // VARIAVEIS DO SISTEMA
char caracteres[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9','!','@','#','$','&','*','-','_'};
int tamanho;
int tipo;

    // ITENS DE ENTRADA
printf("\n \t Escreva: '1'- para somente numeros ou '2'- para letras e numeros: ");
scanf("%d", &tipo);

printf("\n \n \t defina o tamnho que vc quer: ");
scanf("%d", &tamanho);

    // CODIGO PARA ATUALIZANDO OS NUMEROS ALEATORIOS
    srand(time(NULL));


    printf("\n A sua senha e: ");

    // ITENS DE SAIDA
     if(tipo == 1){
for (int i = 0; i < tamanho; i++)
{
     int min = 0;
    int max = 9;

    // GERADOR DE NUMEROS ALEATORIO
    int numeroAleatorio_1 = (rand() % (max - min + 1)) + min;

    printf("%d", numeroAleatorio_1);
}
     } 

      else if(tipo == 2){

for (int i = 0; i < tamanho; i++)
{
     int min = 0;
    int max = 70;

    int numeroAleatorio_1 = (rand() % (max - min + 1)) + min;

    printf("%c", caracteres[numeroAleatorio_1]);
}
}
printf("\n \n");
system("pause");

}
