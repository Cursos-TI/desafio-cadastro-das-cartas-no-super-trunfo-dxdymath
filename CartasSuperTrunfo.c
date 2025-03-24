#include <stdio.h>

struct Carta {
    int idCarta;
    char estadoCarta[2];
    char codigoCarta[4];
    char nomeCidade[100];
    int numeroTotalPopulacao;
    float areaCidade;
    float pibCidade;
    int numeroPontoTuristico;
};


void ler_dados_carta(int idCarta, struct Carta *carta);
void exibir_carta(struct Carta carta);

int main() {
    
    struct Carta carta1;
    struct Carta carta2;
    ler_dados_carta(1, &carta1);
    ler_dados_carta(2, &carta2);

    exibir_carta(carta1);
    exibir_carta(carta2);
    return 0;
}

void ler_dados_carta(int idCarta, struct Carta *carta) {

    carta->idCarta = idCarta;
    
    printf("Digite o estado [A-H]: ");
    scanf("%s", carta->estadoCarta);
    printf("Digita o código da carta: ");
    scanf("%s", carta->codigoCarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta->nomeCidade);
    printf("Digite o número de habitantes: ");
    scanf("%d", &carta->numeroTotalPopulacao);
    printf("Digite a área da cidade em metros quadrados: ");
    scanf("%f", &carta->areaCidade);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta->pibCidade);
    printf("Digite o número total de pontos turísticos da cidade: ");
    scanf("%d", &carta->numeroPontoTuristico);

    printf("\n");
};

void exibir_carta(struct Carta carta) {

    printf("Carta %d\n", carta.idCarta);
    printf("Estado: %s\n", carta.estadoCarta);
    printf("Código: %s\n", carta.codigoCarta);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("Área:  %.2f\n", carta.areaCidade);
    printf("PIB: %.2f\n", carta.pibCidade);
    printf("Número de Pontos Turísticos: %d\n", carta.numeroPontoTuristico);
    printf("\n");
};
