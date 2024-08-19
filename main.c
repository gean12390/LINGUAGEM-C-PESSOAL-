#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "calculo.h"
#include "switch.h"


int char_int;

int main() {
    /*VARIAVEIS USADAS: (PODEM SER ENCONTRADAS DENTRO DAS BIBLIOTECAS CRIADAS)
    int ascii;
    char c[3];
    int char_int;
    */
    printf("CONVERSOR DE CARCTER/NUMERO PARA BINARIO \n");
    printf("ESCOLHA QUALQUER LETRA OU NUMERO(*'ATE 128'*) \n");    
    scanf("%3s" , &c);

    /*O "isdigit" foi adicionado para pegar todos os numeros digitados dentro do char (*max(3))*/
    
        if(isdigit(c[0])){
        char_int = atoi(c); // atoi transforma toda a "string" em numeros inteiros
        ascii = char_int;
            if(char_int >= 129 || ascii >= 129){
                printf("NAO FOI POSSIVEL CONVERTER, POIS O CONVERSOR NAO ACEITA NUMEROS DE 129 PARA CIMA \n");
                return 1;
            } else{
            convr_binario();
                return 0;
                }
        }else{
            tabela();
           convr_binario();
        }
    
    return 0;
}
