#include <stdio.h>
#include <string.h>

int main() {
    // Agora programa também deve:
    // Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
    // Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
    // Exibir os Resultados:

    char estado_1, estado_2;
    char carta_1[4], carta_2[4];
    char nome_cidade_1[50], nome_cidade_2[50];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float densidade_1, densidade_2;
    float pib_1, pib_2;
    float pib_per_capita_1, pib_per_capita_2;
    int pontos_turisticos_1, pontos_turisticos_2;

    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado_1); // Note o espaço antes de %c para consumir qualquer caractere de nova linha pendente
    while (estado_1 < 'A' || estado_1 > 'H') {
        printf("Estado inválido! Digite um estado entre A e H: \n");
        scanf(" %c", &estado_1);
    }
    printf("Digite o código da carta (ex: 01): ");
    scanf("%3s", carta_1);
    {
        char tmp1[4];
        if (carta_1[0] != estado_1) {
            snprintf(tmp1, sizeof tmp1, "%c%s", estado_1, carta_1);
            strncpy(carta_1, tmp1, sizeof(carta_1));
            carta_1[sizeof(carta_1)-1] = '\0';
        }
    }
    
    int _c;
    while ((_c = getchar()) != '\n' && _c != EOF);
    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade_1, sizeof(nome_cidade_1), stdin);
    {
        size_t _len = strlen(nome_cidade_1);
        if (_len > 0 && nome_cidade_1[_len-1] == '\n')
            nome_cidade_1[_len-1] = '\0';
    }
    // Validar população para inteiro:
    printf("Digite a população da cidade: \n");
    while (scanf("%d", &populacao_1) != 1) {
        printf("Entrada inválida! Digite um número inteiro para a população: \n");
        while ((getchar()) != '\n'); // Limpar o buffer de entrada
    }
    // Validar área para float:
    printf("Digite a área da cidade (em km²): \n");
    while (scanf("%f", &area_1) != 1) {
        printf("Entrada inválida! Digite um número válido para a área: \n");
        while ((getchar()) != '\n'); // Limpar o buffer de entrada
    }

    // Calcular densidade populacional:
    if (area_1 > 0) {
        densidade_1 = populacao_1 / area_1;
    } else {
        densidade_1 = 0; // Evitar divisão por zero
    }

    // Validar PIB para float:
    printf("Digite o PIB da cidade: \n");
    while (scanf("%f", &pib_1) != 1) {
        printf("Entrada inválida! Digite um número válido para o PIB: \n");
        while ((getchar()) != '\n'); // Limpar o buffer de entrada
    }

    // Calcular PIB per capita:
    if (populacao_1 > 0) {
        pib_per_capita_1 = pib_1 * 1000000000 / populacao_1; // Convertendo PIB de bilhões para reais
    } else {
        pib_per_capita_1 = 0; // Evitar divisão por zero
    }

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_1);

    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado_2); // Note o espaço antes de %c para consumir qualquer caractere de nova linha pendente
    while (estado_2 < 'A' || estado_2 > 'H') {
        printf("Estado inválido! Digite um estado entre A e H: \n");
        scanf(" %c", &estado_2);
    }
    printf("Digite o código da carta (ex: 01): ");
    scanf("%3s", carta_2);
    {
        char tmp2[4];
        if (carta_2[0] != estado_2) {
            snprintf(tmp2, sizeof tmp2, "%c%s", estado_2, carta_2);
            strncpy(carta_2, tmp2, sizeof(carta_2));
            carta_2[sizeof(carta_2)-1] = '\0';
        }
    }
    while ((_c = getchar()) != '\n' && _c != EOF);
    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade_2, sizeof(nome_cidade_2), stdin);
    {
        size_t _len2 = strlen(nome_cidade_2);
        if (_len2 > 0 && nome_cidade_2[_len2-1] == '\n')
            nome_cidade_2[_len2-1] = '\0';
    }

    // Validar população para inteiro:
    printf("Digite a população da cidade: \n");
    while (scanf("%d", &populacao_2) != 1) {
        printf("Entrada inválida! Digite um número inteiro para a população: \n");
        while ((getchar()) != '\n'); // Limpar o buffer de entrada
    }

    // Validar área para float:
    printf("Digite a área da cidade (em km²): \n");
    while (scanf("%f", &area_2) != 1) {
        printf("Entrada inválida! Digite um número válido para a área: \n");
        while ((getchar()) != '\n'); // Limpar o buffer de entrada
    }

    // Calcular densidade populacional:
    if (area_2 > 0) {
        densidade_2 = populacao_2 / area_2;
    } else {
        densidade_2 = 0; // Evitar divisão por zero
    }

    // Validar PIB para float:
    printf("Digite o PIB da cidade: \n");
    while (scanf("%f", &pib_2) != 1) {
        printf("Entrada inválida! Digite um número válido para o PIB: \n");
        while ((getchar()) != '\n'); // Limpar o buffer de entrada
    }

    // Calcular PIB per capita:
    if (populacao_2 > 0) {
        pib_per_capita_2 = pib_2 * 1000000000 / populacao_2; // Convertendo PIB de bilhões para reais
    } else {
        pib_per_capita_2 = 0; // Evitar divisão por zero
    }
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_2);

    printf("\nInformações da Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", carta_1);
    printf("Nome da Cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);

    printf("\nInformações da Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", carta_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);

}
