#include <stdio.h>

int main(){
    
    // O 2 na frente de cada variável é o registro da carta 02
    char estado;
    char estado2[2]; 
    char codigocarta[20], codigocarta02[10];
    char nomecidade[20], nomecidade02[20];
    unsigned long int populacao, populacao02;
    float area, area02;
    long int pib, pib02;
    int pturistico, pturistico02;

    // Começando com uma linha de identificação do jogo e outra indicando que o usuário está cadastrando a primeira carta
    printf("SUPER TRUNFO\n");
    printf("Carta 01: \n");
   
    printf("Insira uma letra de A a H: ");
    scanf("%c", &estado);

    printf("Insira a letra escolhida com um número de 01 a 04: ");
    scanf("%s", &codigocarta);

    printf("Insira o nome da cidade: ");
    scanf("%s", &nomecidade);

    printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Insira a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Insira o PIB da cidade: R$ ");
    scanf("%ld", &pib);

    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pturistico);

    float denspop1 = populacao / area;
    float pibpcap1 = pib / populacao;
    float superpoder1 = (float)populacao + area + (float)pib + (float)pturistico - denspop1 + pibpcap1;

    // A linha abaixo é uma confirmação de cadastro da carta 01 para o usuário, 
    // A linha seguinte orienta o usuário a reiniciar o programa caso tenha colocado algum dado errado 
    // A linha seguinte após a leitura de dados indica ao usuário que ele iniciará o cadastro da segunda carta.
    printf("Você cadastrou a Carta 01\n");
    printf("\n");
    printf("Verifique abaixo os dados cadastrados da carta 01\n");

    printf("Carta 01:\n");
    printf("Código: %s\n", codigocarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2ld\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop1);
    printf("PIB per Capita: R$%.2f\n", pibpcap1);
    printf("\n");
   
    printf("Caso tenha inserido algum dado errado reinicie o programa, caso contrário...\n");
    printf("Insira os dados da Carta 02\n");

    printf("Insira uma letra de A a H: ");
    scanf("%s", &estado2);

    printf("Insira a letra escolhida com um número de 01 a 04: ");
    scanf("%s", &codigocarta02);

    printf("Insira o nome da cidade: ");
    scanf("%s", &nomecidade02);

    printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &populacao02);

    printf("Insira a área da cidade em km²: ");
    scanf("%f", &area02);

    printf("Insira o PIB da cidade: R$ ");
    scanf("%ld", &pib02);

    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pturistico02);

    float denspop2 = populacao02 / area02;
    float pibpcap2 = pib02 / populacao02;
    float superpoder2 = (float)populacao02 + area02 + (float)pib02 + (float)pturistico02 - denspop2 + pibpcap2;

    // Abaixo, uma linha confirmando ao usuário o cadastro da carta 02 e outra linha abaixo 
    // Solicitando ao usuário que verifique os dados da carta cadastrada repetindo o mesmo procedimento da carta 01
    printf("Você cadastrou a carta 02\n");
    printf("\n");
    printf("Verifique abaixo os dados cadastrados da carta 02\n");

    printf("Carta 02:\n");
    printf("Código: %s\n", codigocarta02);
    printf("Nome da Cidade: %s\n", nomecidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: R$ %.2ld\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", pturistico02);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop2);
    printf("PIB per Capita: R$%.2f\n", pibpcap2);
    printf("\n");

    printf("Comparação de Cartas:\n");
    printf("População: %d\n", populacao > populacao02);
    printf("Área: %d\n", area > area02);
    printf("PIB: %d\n", pib > pib02);
    printf("Pontos Turísticos: %d\n", pturistico > pturistico02);
    printf("Densidade Populacional: %d\n", denspop1 < denspop2);
    printf("PIB per Capita: %d\n", pibpcap1 > pibpcap2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);
    printf("\n");
    printf("O Número 1 indica vitória da Carta 01\n");
    printf("O Número 0 indica vitória da Carta 02\n");
}