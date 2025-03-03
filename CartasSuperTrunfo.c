#include <stdio.h>

int main(){
    
    // O 2 na frente de cada variável é o registro da carta 02
    char estado;
    char estado2[2]; 
    char codigocarta[20], codigocarta02[10];
    char nomecidade[20], nomecidade02[20];
    int populacao, populacao02;
    float area, area02;
    float pib, pib02;
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
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pturistico);

    // Inclusão das variáveis de Densidade Populacional e PIB per Capita da Carta 01
    float denspop1 = populacao / area;
    float pibpcap1 = pib / populacao;

    // A linha abaixo é uma confirmação de cadastro da carta 01 para o usuário e a linha seguinte indica ao usuário que ele iniciará o cadastro da segunda carta
    printf("Você cadastrou a Carta 01\n");
    printf("\n");
    printf("Agora insira os dados da Carta 02\n");

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
    scanf("%f", &pib02);

    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pturistico02);

    // Inclusão das variáveis de Densidade Populacional e PIB per Capita da Carta 02
    float denspop2 = populacao02 / area02;
    float pibpcap2 = pib02 / populacao02;

    // Abaixo, uma linha confirmando ao usuário o cadastro da carta 02 e outra linha abaixo solicitando ao usuário que verifique os dados das cartas que foram cadastrados
    printf("Você cadastrou a carta 02\n");
    printf("\n");
    printf("Verifique abaixo os dados cadastrados das cartas 01 e 02\n");

    printf("Carta 01:\n");
    printf("Código: %s\n", codigocarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop1);
    printf("PIB per Capita: R$%.2f\n", pibpcap1);
    printf("\n");
   
    printf("Carta 02:\n");
    printf("Código: %s\n", codigocarta02);
    printf("Nome da Cidade: %s\n", nomecidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: R$ %.2f\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", pturistico02);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop2);
    printf("PIB per Capita: R$%.2f\n", pibpcap2);

}