#include<stdio.h>
int main(){
             //VARIÁVEIS_01:



        char estado1[90];

        char codigo1[90];

        char cidade1[100];

        float populacao1, area1, pib1;

        int pontos_turisticos1;

        float densidade_populacional1, pib_per_capita1, inverso_densidade_populacional1;

        double superpoder_1;





        //ENTRADA DE DADOS_01:



        printf("DESAFIO SUPERTRUNFO(;\n");

        printf("\n");

        printf("CADASTRE SUA 1º CARTA! \n");

        printf("\n");



        printf("Insira o Estado: ");

        scanf(" %[^\n]", estado1);

       

        printf("Insira o Código: ");

        scanf(" %[^\n]", codigo1);



        printf("Insira o nome da cidade: ");

        scanf(" %[^\n]", cidade1);



        printf("Insira o Nº Populacional: ");

        scanf("%f", &populacao1);



        printf("Insira a Área Total da cidade: ");

        scanf( "%f", &area1);



        printf("Insira o PIB: ");

        scanf("%f", &pib1);



        printf("Nº de Pontos Turísticos: ");

        scanf("%d", &pontos_turisticos1);



        //CÁLCULOS_01:



        densidade_populacional1 = populacao1 / area1;

        pib_per_capita1 = pib1 / populacao1;

        inverso_densidade_populacional1 = 1 / densidade_populacional1;

        superpoder_1 = populacao1 + area1 + pib1 + (float) pontos_turisticos1 +

        pib_per_capita1 + inverso_densidade_populacional1;



       

        //SAÍDA DE DADOS_01:



            printf("Estado: %s\n", estado1);

            printf("Código: %s\n", codigo1);

            printf("Cidade: %s\n", cidade1);

            printf("População: %.3f Habitantes \n", populacao1);

            printf("Área Total %.3f Km². \n", area1);

            printf("PIB: %.3f Bilhões de Reais \n", pib1);

            printf("São %d pontos turísticos. \n", pontos_turisticos1);

            printf("Densidade Populacional: %.3f hab/km²\n", populacao1 / area1);

            printf("PIB per Capita: %.3f reais\n", pib1 / populacao1);

            printf ("Inverso Densidade Populacional: %.3f\n", inverso_densidade_populacional1);

            printf("Super Poder: %.3f pontos\n", superpoder_1);

            printf("Computando..... ");

            printf("CARTA (01) CADASTRADA COM SUCESSO!\n");

            printf("\n");

            printf("-----------------------------------\n");

            char estado2[90];

            char codigo2[90];
    
            char cidade2[100];
    
            float populacao2, area2, pib2;
    
            int pontos_turisticos2;
    
            float densidade_populacional2, pib_per_capita2, inverso_densidade_populacional2;
    
            double superpoder_2;
    
    
    
    
    
            //ENTRADA DE DADOS_02:
    
            printf("CADASTRE SUA 2º CARTA!\n");
    

            printf("\n---------------------------------\n");
    
    
    
            printf("Insira o Estado2: ");
    
            scanf(" %[^\n]", estado2);
    
           
    
            printf("Insira o Código2: ");
    
            scanf(" %[^\n]", codigo2);
    
            

            printf("Insira o nome da cidade2: ");
    
            scanf(" %[^\n]", cidade2);
    
           
    
            printf("Insira o Nº Populacional2: ");
    
            scanf("%f", &populacao2);
    
    
    
            printf("Insira a Área Total da cidade2: ");
    
            scanf( "%f", &area2);
    
    
    
            printf("Insira o PIB referente2: ");
    
            scanf("%f", &pib2);
    
    
    
            printf("Nº de Pontos Turísticos2: ");
    
            scanf("%d", &pontos_turisticos2);


    
    
    
            //CÁLCULOS_02:
    
    
    
            densidade_populacional2 = populacao2 / area2;
    
            pib_per_capita2 = pib2 / populacao2;
    
            inverso_densidade_populacional2 = 1 / densidade_populacional2;
    
            superpoder_2= populacao2 + area2 + pib2 + (float) pontos_turisticos2 +
    
            pib_per_capita2 + inverso_densidade_populacional2;
    
    
    
           
    
            //SAÍDA DE DADOS_02:
    
    
    
                printf("Estado: %s\n", estado2);
    
                printf("Código: %s\n", codigo2);
    
                printf("Cidade: %s\n", cidade2);
    
                printf("População: %.3f Habitantes \n", populacao2);
    
                printf("Área Total %.3f Km². \n", area2);
    
                printf("PIB: %.3f Bilhões de Reais \n", pib2);
    
                printf("São %d pontos turísticos. \n", pontos_turisticos2);
    
                printf("Densidade Populacional: %.3f hab/km²\n", populacao2 / area2);
    
                printf("PIB per Capita: %.3f reais\n", pib2 / populacao2);
    
                printf ("Inverso Densidade Populacional: %.3f\n", inverso_densidade_populacional2);
    
                printf("Super Poder: %.3f pontos\n", superpoder_2);
    
                printf("Computando..... ");
    
                printf("CARTA (02) CADASTRADA COM SUCESSO!\n");
    
return 0;
}