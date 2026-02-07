#include <stdio.h>
#include <string.h>

int main() {
    //Carta de Trunfo - Novato
    // Crie um programa em C que permita ao usuário cadastrar duas cartas de trunfo representando uma cidade. A carta deve conter as seguintes informações:
    
    // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char estado_1, estado_2;
 
    // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    // 4 bytes para "A01\0"
    char carta_1[4], carta_2[4];

    // Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    char nome_cidade_1[50], nome_cidade_2[50];
    
    // População: O número de habitantes da cidade. Tipo: int
    int populacao_1, populacao_2;
    
    // Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    float area_1, area_2;
    
    // PIB: O Produto Interno Bruto da cidade. Tipo: float
    float pib_1, pib_2;
    
    // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    int pontos_turisticos_1, pontos_turisticos_2;

    // O programa deve solicitar ao usuário que insira as informações para cada carta, armazenar os dados em variáveis apropriadas e, em seguida, exibir as informações cadastradas para ambas as cartas.
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
    
    // consume leftover newline before reading a full line
    int _c;
    while ((_c = getchar()) != '\n' && _c != EOF);
    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade_1, sizeof(nome_cidade_1), stdin);
    {
        size_t _len = strlen(nome_cidade_1);
        if (_len > 0 && nome_cidade_1[_len-1] == '\n')
            nome_cidade_1[_len-1] = '\0';
    }
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao_1);
    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area_1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_1);
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
    
    // consume leftover newline before reading a full line
    while ((_c = getchar()) != '\n' && _c != EOF);
    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade_2, sizeof(nome_cidade_2), stdin);
    {
        size_t _len2 = strlen(nome_cidade_2);
        if (_len2 > 0 && nome_cidade_2[_len2-1] == '\n')
            nome_cidade_2[_len2-1] = '\0';
    }
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao_2);
    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area_2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_2);

    // Exibição das informações das cartas
    printf("\nInformações da Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", carta_1);
    printf("Nome da Cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);

    printf("\nInformações da Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", carta_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);

}
