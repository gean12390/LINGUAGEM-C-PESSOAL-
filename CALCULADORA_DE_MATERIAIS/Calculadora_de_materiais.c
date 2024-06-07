#include <stdio.h>

int main(){
    float material;
    float peso_mate;
    float peso_unid;

  
    printf("insira o peso do material (PC/KG): ");
    scanf("%f", &peso_mate);
    printf("Insira o peso por unidade (PC/KG): ");
    scanf("%f", &peso_unid);

    //TOTAL SEM IPI 
    float total_s_ipi = (peso_mate * peso_unid);

    printf("insira o codigo do material: ");
    scanf("%f", &material);

    //CALCULO IPI 
    float IPI = (total_s_ipi * 0.0325);
    float S_IPI = 0;

    // CALCULO ICMS
    float ICMS_AL = (total_s_ipi * 0.18);
    float ICMS_FCP = (total_s_ipi * 0.12);
    float ICMS_REDU = (total_s_ipi -(total_s_ipi * 0.3333))* 0.18;

    float REDU_PIS_COFINS;
    float TOTAL;

    system("cls");


    //SAÍDA
    if(material == 02){
     REDU_PIS_COFINS = (total_s_ipi - ICMS_AL);
     TOTAL = total_s_ipi;
     float PIS = (REDU_PIS_COFINS * 0.0065);
     float COFINS = (REDU_PIS_COFINS * 0.03);

        printf("PESO DO MATERIAL: %.2f \n", peso_mate);
        printf("PESO POR UNIDADE: %.2f \n", peso_unid);
        printf("TOTAL SEM IPI: %.2f \n", total_s_ipi);
        printf("IPI: %.2f \n", S_IPI);
        printf("ICMS: %.2f \n", ICMS_AL);
        printf("TOTAL: %.2f \n", TOTAL);
        printf("REDUCAO PIS/COFINS: %.2f \n", REDU_PIS_COFINS);
        printf("PIS: %.2f \n", PIS);
        printf("COFINS %.2f \n", COFINS);

        
    } else if(material == 20){
     REDU_PIS_COFINS = (total_s_ipi - ICMS_FCP);
     TOTAL = (total_s_ipi + IPI);
     float PIS = (REDU_PIS_COFINS * 0.0065);
     float COFINS = (REDU_PIS_COFINS * 0.03);

        printf("PESO DO MATERIAL: %.2f \n", peso_mate);
        printf("PESO POR UNIDADE: %.2f \n", peso_unid);
        printf("TOTAL SEM IPI: %.2f \n", total_s_ipi);
        printf("IPI: %.2f \n", IPI);
        printf("ICMS: %.2f \n", ICMS_FCP);
        printf("TOTAL: %.2f \n", TOTAL);
        printf("REDUCAO PIS/COFINS: %.2f \n", REDU_PIS_COFINS);
        printf("PIS: %.2f \n", PIS);
        printf("COFINS %.2f \n", COFINS);


    } else if(material == 21){
     REDU_PIS_COFINS = (total_s_ipi - ICMS_AL);
     TOTAL = (total_s_ipi + IPI);
     float PIS = (REDU_PIS_COFINS * 0.0065);
     float COFINS = (REDU_PIS_COFINS * 0.03);

        printf("PESO DO MATERIAL: %.2f \n", peso_mate);
        printf("PESO POR UNIDADE: %.2f \n", peso_unid);
        printf("TOTAL SEM IPI: %.2f \n", total_s_ipi);
        printf("IPI: %.2f \n", IPI);
        printf("ICMS: %.2f \n", ICMS_AL);
        printf("TOTAL: %.2f \n", TOTAL);
        printf("REDUCAO PIS/COFINS: %.2f \n", REDU_PIS_COFINS);
        printf("PIS: %.2f \n", PIS);
        printf("COFINS %.2f \n", COFINS);


    } else if(material == 22){
     REDU_PIS_COFINS = (total_s_ipi - ICMS_REDU);
     TOTAL = (total_s_ipi + IPI);
     float PIS = (REDU_PIS_COFINS * 0.0065);
     float COFINS = (REDU_PIS_COFINS * 0.03);

        printf("PESO DO MATERIAL: %.2f \n", peso_mate);
        printf("PESO POR UNIDADE: %.2f \n", peso_unid);
        printf("TOTAL SEM IPI: %.2f \n", total_s_ipi);
        printf("IPI: %.2f \n", IPI);
        printf("ICMS: %.2f \n", ICMS_REDU);
        printf("TOTAL: %.2f \n", TOTAL);
        printf("REDUCAO PIS/COFINS: %.2f \n", REDU_PIS_COFINS);
        printf("PIS: %.2f \n", PIS);
        printf("COFINS %.2f \n", COFINS);
    }
    

    system("pause");
    return 0;
}
