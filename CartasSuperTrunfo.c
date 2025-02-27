 #include <stdio.h>

int main(){
    char Estado1[50], Estado2[50];
    char Cidade1[50], Cidade2[50];
    float Populacao1, Populacao2;
    char codigo1[50] , codigo2[50];
    float area1, area2;
    float pib1, pib2;
    int Pontoturistico1, Pontoturistico2;

    printf("Digite os dados da carta 1:\n");

    printf("Digite o seu Estado:\n");
    scanf("%s", &Estado1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &Cidade1);

    printf("Digite a Populacao da cidade:\n ");
    scanf("%f", &Populacao1);
    
    printf("Digite o Codigo da carta:\n");
    scanf("%s", &codigo1);

    printf("Digite a area da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o pib da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite os Pontos turisticos");
    scanf("%d", &Pontoturistico1);

    printf("Digite os dados da carta 2\n");

    printf("Digite o seu Estado:\n");
    scanf("%s", &Estado2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &Cidade2);

    printf("Digite o nome da Populacao:\n");
    scanf("%f",&Populacao2);

    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigo2);

    printf("Digite a area da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o pib da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite os Pontos turisticos");
    scanf("%d", &Pontoturistico2);

    printf("\n\n**********************\n\n");
    printf("Carta 01:\n\n");
    printf("Estado:%s\n", Estado1);
    printf("cidade:%s\n", Cidade1);
    printf("Populacao:%f\n", Populacao1);
    printf("codigo:%s\n", codigo1);
    printf("area:%f\n", area1);
    printf("pib:%f\n", pib1);
    printf("Pontoturistico:%d", Pontoturistico1);

    printf("\n\n**********************\n\n");
    printf("Carta 02:\n\n");
    printf("Estado:%s\n", Estado2);
    printf("cidade:%s\n", Cidade2);
    printf("Populacao:%f\n",Populacao2);
    printf("codigo:%s\n", codigo2);
    printf("area:%f\n", area2);
    printf("pib:%f\n", pib2);
    printf("Pontoturistico:%d",Pontoturistico2);

    return 0;













}