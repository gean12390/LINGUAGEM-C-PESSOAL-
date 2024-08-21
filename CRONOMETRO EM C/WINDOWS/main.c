#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // Para a função Sleep()

 int main(){

     int temp = 1;
    int i = 1;
    int cron = 1;
    printf("CRONOMETRO.\n");
    printf("Coloque um tempo aqui (EM SEGUNDOS):\n");

    scanf("%d", &cron);

    system("cls");
    
    for (i; i <= cron; i++) {
         printf("\033]50;SetProfile=1\007");
        printf("\n \t %d \n", temp);
        temp++;
        Sleep(1000); 
        system("cls");
    }

    printf("Fim do Tempo.\n");
    return 0;
}


