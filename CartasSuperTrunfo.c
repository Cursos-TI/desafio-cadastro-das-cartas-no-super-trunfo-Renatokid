#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da carta 01
    char estado01[3];
    char codigo01[5], cidade01[50];
    int populacao01, pontos01;
    float area01, pib01;

    // Variáveis da carta 02
    char estado02[3];
    char codigo02[5], cidade02[50];
    int populacao02, pontos02;
    float area02, pib02;

    // Cadastro da Carta 01
    printf("Informe dados da carta 01:\n");
    printf("Estado: ");
    scanf("%2s", estado01);
    getchar(); // Limpa o buffer
    printf("Nome da cidade: ");
    fgets(cidade01, sizeof(cidade01), stdin);
    cidade01[strcspn(cidade01, "\n")] = 0; // Remove o ENTER
    printf("Código da carta: ");
    scanf("%4s", codigo01);
    printf("População: ");
    scanf("%d", &populacao01);
    printf("Área em KM²: ");
    scanf("%f", &area01);
    printf("PIB: ");
    scanf("%f", &pib01);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos01);
    getchar(); // Limpa o buffer

    // Cadastro da Carta 02
    printf("\nInforme dados da carta 02:\n");
    printf("Estado: ");
    scanf("%2s", estado02);
    getchar(); // Limpa o buffer
    printf("Nome da cidade: ");
    fgets(cidade02, sizeof(cidade02), stdin);
    cidade02[strcspn(cidade02, "\n")] = 0; // Remove o ENTER
    printf("Código da carta: ");
    scanf("%4s", codigo02);
    printf("População: ");
    scanf("%d", &populacao02);
    printf("Área em KM²: ");
    scanf("%f", &area02);
    printf("PIB: ");
    scanf("%f", &pib02);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos02);

    // Exibição dos Dados das Cartas:
    printf("\nDados da Carta 01:\n");
    printf("Estado: %s\n", estado01);
    printf("Cidade: %s\n", cidade01);
    printf("Código da carta: %s\n", codigo01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f KM²\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Número de pontos turísticos: %d\n", pontos01);

    printf("\nDados da Carta 02:\n");
    printf("Estado: %s\n", estado02);
    printf("Cidade: %s\n", cidade02);
    printf("Código da carta: %s\n", codigo02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f KM²\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Número de pontos turísticos: %d\n", pontos02);

    return 0;
}

