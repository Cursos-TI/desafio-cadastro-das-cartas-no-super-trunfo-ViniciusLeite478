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

    printf("Insira a área da cidade Em km²: ");
    scanf("%f", &area);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pturistico);

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

    printf("Insira a área da cidade Em km²: ");
    scanf("%f", &area02);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib02);

    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pturistico02);

    // Abaixo, uma linha confirmando ao usuário o cadastro da carta 02 e outra linha abaixo solicitando ao usuário que verifique os dados das cartas que foram cadastrados
    printf("Você cadastrou a carta 02\n");
    printf("\n");
    printf("Verifique abaixo os dados cadastrados das cartas 01 e 02\n");

    printf("Carta 01:\n");
    printf("Código: %s\n", codigocarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %2.f km²\n", area);
    printf("PIB: %2.f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturistico);
    printf("\n");
   
    printf("Carta 02:\n");
    printf("Código: %s\n", codigocarta02);
    printf("Nome da Cidade: %s\n", nomecidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %2.f km²\n", area02);
    printf("PIB: %2.f\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", pturistico02);

}