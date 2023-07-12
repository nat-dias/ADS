/*No município de Guarda-Mor, vários proprietários de imóveis estão em atraso com o pagamento do
IPTU. Escreva um programa que calcule e escreva o valor da multa a ser paga por estes proprietários,
bem como o total a ser arrecadado pelo município, considerando que:
• os dados de cada imóvel (identificação, valor do imposto e número de meses em atraso) estão
à disposição para leitura;
• as multas devem ser calculadas no valor de 2% por mês de atraso.
• o último registro lido, que não deve ser considerado, contém identificação do imóvel igual a
zero;
• o programa deve exibir: a identificação do imóvel, valor do imposto, número de meses em
atraso e multa a ser paga.*/

#include <stdio.h>

#define MULTA_PERCENTUAL 0.02

typedef struct {
    int identificacao;
    float valorImposto;
    int mesesAtraso;
} Imovel;

int main() {
    Imovel imovel;
    float totalArrecadado = 0.0;

    printf("Cálculo da multa do IPTU - Município de Guarda-Mor\n");

    while (1) {
        printf("\nInforme a identificação do imóvel (ou 0 para sair): ");
        scanf("%d", &imovel.identificacao);

        if (imovel.identificacao == 0) {
            break;
        }

        printf("Informe o valor do imposto: R$ ");
        scanf("%f", &imovel.valorImposto);

        printf("Informe o número de meses em atraso: ");
        scanf("%d", &imovel.mesesAtraso);

        float multa = imovel.valorImposto * imovel.mesesAtraso * MULTA_PERCENTUAL;
        float totalPagar = imovel.valorImposto + multa;

        printf("\nImóvel %d\n", imovel.identificacao);
        printf("Valor do imposto: R$ %.2f\n", imovel.valorImposto);
        printf("Número de meses em atraso: %d\n", imovel.mesesAtraso);
        printf("Multa a ser paga: R$ %.2f\n", multa);

        totalArrecadado += totalPagar;
    }

    printf("\nTotal arrecadado pelo município: R$ %.2f\n", totalArrecadado);

    return 0;
}
