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

    // Uso da Estrutura Switch para comparação entre cartas //
    
    int opcao;

    printf("Escolha um atributo para fazer a comparação entre as cartas\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Super Poder\n");
    printf("\n");
    printf("Escolha uma Opção:");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    printf("Você Escolheu - População\n");
    printf("\n");
    printf("Carta 01\n");
    printf("%s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("\n");
    printf("Carta 02\n");
    printf("%s\n", nomecidade02);
    printf("População: %d\n", populacao02);
    printf("\n");

    if (populacao > populacao02){
    printf("Carta 01 Venceu\n");
    } else if (populacao < populacao02) {
    printf("Carta 02 Venceu\n");
    } else { printf("Empate!\n");
    }
    break;
    case 2:
    printf("Você Escolheu - Área\n");
    printf("\n");
    printf("Carta 01\n");
    printf("%s\n", nomecidade);
    printf("Área: %.2f km²\n", area);
    printf("\n");
    printf("Carta 02\n");
    printf("%s\n", nomecidade02);
    printf("Área: %.2f km²\n", area02);
    printf("\n");

    if (area > area02){
    printf("Carta 01 Venceu\n");
    } else if (area < area02) {
    printf("Carta 02 Venceu\n");
    } else { printf("Empate!\n");
    }
    break;
    case 03:
    printf("Você Escolheu - PIB\n");
    printf("\n");
    printf("Carta 01\n");
    printf("%s\n", nomecidade);
    printf("PIB: R$ %.2ld\n", pib);
    printf("\n");
    printf("Carta 02\n");
    printf("%s\n", nomecidade02);
    printf("PIB: R$ %.2ld\n", pib02);
    printf("\n");

    if (pib > pib02){
    printf("Carta 01 Venceu\n");
    } else if (pib < pib02) {
    printf("Carta 02 Venceu\n");
    } else { printf("Empate!\n");
    }
    break;
    case 04:
    printf("Você Escolheu - Pontos Turísticos\n");
    printf("\n");
    printf("Carta 01\n");
    printf("%s\n", nomecidade);
    printf("Número de Pontos Turísticos: %d\n", pturistico);
    printf("\n");
    printf("Carta 02\n");
    printf("%s\n", nomecidade02);
    printf("Número de Pontos Turísticos: %d\n", pturistico02);
    printf("\n");

    if (pturistico > pturistico02){
    printf("Carta 01 Venceu\n");
    } else if (pturistico < pturistico02) {
    printf("Carta 02 Venceu\n");
    } else { printf("Empate!\n");
    }
    break;
    case 05:
    printf("Você Escolheu - Densidade Populacional\n");
    printf("\n");
    printf("Carta 01\n");
    printf("%s\n", nomecidade);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop1);
    printf("\n");
    printf("Carta 02\n");
    printf("%s\n", nomecidade02);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop2);
    printf("\n");

    if (denspop1 < denspop2){
    printf("Carta 01 Venceu\n");
    } else if (denspop1 > denspop2) {
    printf("Carta 02 Venceu\n");
    } else { printf("Empate!\n");
    }
    break;
    case 06:
    printf("Você Escolheu - Super Poder\n");
    printf("\n");
    printf("Carta 01\n");
    printf("%s\n", nomecidade);
    printf("Super Poder: %f\n", superpoder1);
    printf("\n");
    printf("Carta 02\n");
    printf("%s\n", nomecidade02);
    printf("Super Poder: %f\n", superpoder2);
    printf("\n");

    if (superpoder1 > superpoder2){
    printf("Carta 01 Venceu\n");
    } else if (superpoder1 < superpoder2) {
    printf("Carta 02 Venceu\n");
    } else { printf("Empate!\n");
    }
    break;
    default:
    printf("Opção Inválida\n");
    break;
    }
    }