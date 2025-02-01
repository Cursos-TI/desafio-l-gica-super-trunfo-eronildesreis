#include <stdio.h>
#include <string.h>

// Estrutura para armazenar as informações de uma cidade
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
} Cidade;

// Função para comparar a população de duas cidades
void compararPopulacao(Cidade cidade1, Cidade cidade2) {
    if (cidade1.populacao > cidade2.populacao) {
        printf("%s tem maior população.\n", cidade1.nome);
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("%s tem maior população.\n", cidade2.nome);
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }
}

// Função para comparar a área de duas cidades
void compararArea(Cidade cidade1, Cidade cidade2) {
    if (cidade1.area > cidade2.area) {
        printf("%s tem maior área.\n", cidade1.nome);
    } else if (cidade1.area < cidade2.area) {
        printf("%s tem maior área.\n", cidade2.nome);
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }
}

// Função para comparar o PIB de duas cidades
void compararPIB(Cidade cidade1, Cidade cidade2) {
    if (cidade1.pib > cidade2.pib) {
        printf("%s tem maior PIB.\n", cidade1.nome);
    } else if (cidade1.pib < cidade2.pib) {
        printf("%s tem maior PIB.\n", cidade2.nome);
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }
}

int main() {
    // Definir as variáveis para armazenar as informações das cidades
    Cidade cidade1, cidade2;

    // Cadastro das Cartas: Solicitar ao usuário que insira as informações das cidades
    printf("Digite o nome da cidade 1: ");
    fgets(cidade1.nome, sizeof(cidade1.nome), stdin);
    cidade1.nome[strcspn(cidade1.nome, "\n")] = '\0'; // Remover o '\n' da string
    
    printf("Digite a população da cidade 1: ");
    scanf("%d", &cidade1.populacao);

    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &cidade1.area);

    printf("Digite o PIB da cidade 1 (em bilhões): ");
    scanf("%f", &cidade1.pib);
    getchar(); // Para capturar o '\n' restante no buffer

    // Repetir para a cidade 2
    printf("\nDigite o nome da cidade 2: ");
    fgets(cidade2.nome, sizeof(cidade2.nome), stdin);
    cidade2.nome[strcspn(cidade2.nome, "\n")] = '\0'; // Remover o '\n' da string
    
    printf("Digite a população da cidade 2: ");
    scanf("%d", &cidade2.populacao);

    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &cidade2.area);

    printf("Digite o PIB da cidade 2 (em bilhões): ");
    scanf("%f", &cidade2.pib);

    // Comparação das cartas: Comparar os atributos das cidades
    printf("\nComparando as cidades:\n");
    compararPopulacao(cidade1, cidade2);
    compararArea(cidade1, cidade2);
    compararPIB(cidade1, cidade2);

    return 0;
