#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // Para a função Sleep()

 int main(){

     int temp = 1;
    int i = 1;
    int cron = 1;
    printf("CRONOMETRO.\n");
    printf("Coloque um tempo aqui (EM SEGUNDOS):\n");

    scanf("%d", &cron);

    system("clear");
    
    for (i; i <= cron; i++) {
        printf("\n \t %d \n", temp);
        temp++;
        sleep(1); 
        system("clear");
    }

    printf("Fim do Tempo.\n");
    return 0;
}


