#include <stdio.h>

// atividade Lucas Antonio

int main() {
// nivel novato: implementando dados de dentrada e de saída
    char estado = 'A';
    char codigoDaCidade[4] = "A01";
    char nomeDaCidade[50];
    int populacao = 0;
    float area = 0.0;
    float pib =0.0;
    int numDePontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    printf("Bem vindo ao super trunfo! Por favor cadastre a cidade que deseja! \n");
    printf("Qual o nome da cidade? \n");
    scanf("%s", nomeDaCidade);
    printf("Qual a população da cidade %s?\n", nomeDaCidade);
    scanf("%d", &populacao);
    printf("Qual a area da cidade, %s?\n", nomeDaCidade);
    scanf("%f", &area);
    printf("Qual o PIB da cidade %s? \n" , nomeDaCidade);
    scanf("%f", &pib);
    printf("Quantos pontos turisticos tem a cidade? \n");
    scanf("%d", &numDePontosTuristicos);
    printf("Parabens por registrar sua cidade aqui está suas informações \n");
    printf("ESTADO: %c \n", estado);
    printf("CÓDIGO DA CARTA: %s \n", codigoDaCidade);
    printf("CIDADE: %s \n", nomeDaCidade);
    printf("POPULAÇÃO: %d habitantes\n", populacao);
    printf("ÁREA: %f quilometros \n", area);
    printf("PIB: %f milhões de reais \n", pib);
    printf("PONTOS TURÍSTICOS: %d pontos\n", numDePontosTuristicos);
    densidadePopulacional = (float) populacao / area;
    pibPerCapita = (float) pib / populacao;
    printf("Densidade populacional: %.2f \n ", densidadePopulacional);
    printf("PIB per capita: %f \n ", pibPerCapita);



    return 0;
}
