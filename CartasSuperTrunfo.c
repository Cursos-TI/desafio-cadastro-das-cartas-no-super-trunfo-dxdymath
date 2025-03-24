#include <stdio.h>

//Struct utilizado como estrutura de dados para armazenar os dados de cada carta para evitar repetição de variáveis
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


void ler_dados_carta(int idCarta, struct Carta *carta);// Definido função para ler dados da carta
void exibir_carta(struct Carta carta);//Definido função para exibir dados da carta

int main() {
    
    struct Carta carta1;//Variável para armazenar dados da carta 1
    struct Carta carta2;//Variável para armazenar dados da carta 2
    ler_dados_carta(1, &carta1);//Chamando função para ler dados da carta 1, passando id e carta como referência para permitir alteração dos valores na memória
    ler_dados_carta(2, &carta2);//Chamando função para ler dados da carta 2, passando id e carta como referência para permitir alteração dos valores na memória

    exibir_carta(carta1);//Exibindo dados da carta 1
    exibir_carta(carta2);//Exibindo dados da carta 2
    return 0;
}

//Implementação da função ler dados carta
void ler_dados_carta(int idCarta, struct Carta *carta) {
    
    carta->idCarta = idCarta; //Atribuido id da carta passado por parâmetro como id da carta
    
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

//Implementado função que exibe os dados da carta previamente armazenados
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
