/*Em uma cooperativa de João Pinheiro, decidiu-se beneficiar os produtores que mais venderem
produtos agrícolas à cooperativa. Para poder realizar a aplicação dos benefícios, foi necessário
cadastrar cada um dos 1230 cooperados, armazenando seus nomes, telefones, CPF, endereço,
quantidade já enviada à cooperativa, o total em R$ da produção entregue e a data (Ano, Mês e Dia)
em que se tornou associado da cooperativa. Em reunião, os administradores chegaram a um acorde
de que apenas os 10 primeiros cooperados seriam premiados com um acréscimo no pagamento dos
insumos entregues à cooperativa. O primeiro em quantidade de entrega recebe um acréscimo de
20% no preço de venda, o segundo 18%, o terceiro 16% até o décimo maior cooperado.

Construa um programa para cadastrar todos os dados dos cooperados e que, em seguida, exiba uma
relação contendo os dados dos cooperados beneficiados com a promoção. Ao fim da relação deve-
se exibir o total em R$ que a cooperativa vai desembolsar para oferecer essa promoção.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_COOPERADOS 1230
#define NUM_BENEFICIADOS 10

typedef struct {
    char nome[50];
    char telefone[15];
    char cpf[12];
    char endereco[100];
    int quantidadeEnviada;
    float totalProducao;
    int dataAssociacaoAno;
    int dataAssociacaoMes;
    int dataAssociacaoDia;
    float premio;
} Cooperado;

int compare(const void *a, const void *b) {
    Cooperado *cooperadoA = (Cooperado *)a;
    Cooperado *cooperadoB = (Cooperado *)b;

    if (cooperadoA->quantidadeEnviada > cooperadoB->quantidadeEnviada) {
        return -1;
    } else if (cooperadoA->quantidadeEnviada < cooperadoB->quantidadeEnviada) {
        return 1;
    } else {
        return 0;
    }
}

void cadastrarCooperados(Cooperado cooperados[]) {
    int i;

    printf("Cadastro dos Cooperados\n");

    for (i = 0; i < NUM_COOPERADOS; i++) {
        printf("\nCooperado %d:\n", i + 1);

        printf("Nome: ");
        fgets(cooperados[i].nome, sizeof(cooperados[i].nome), stdin);
        cooperados[i].nome[strcspn(cooperados[i].nome, "\n")] = '\0';

        printf("Telefone: ");
        fgets(cooperados[i].telefone, sizeof(cooperados[i].telefone), stdin);
        cooperados[i].telefone[strcspn(cooperados[i].telefone, "\n")] = '\0';

        printf("CPF: ");
        fgets(cooperados[i].cpf, sizeof(cooperados[i].cpf), stdin);
        cooperados[i].cpf[strcspn(cooperados[i].cpf, "\n")] = '\0';

        printf("Endereço: ");
        fgets(cooperados[i].endereco, sizeof(cooperados[i].endereco), stdin);
        cooperados[i].endereco[strcspn(cooperados[i].endereco, "\n")] = '\0';

        printf("Quantidade já enviada à cooperativa: ");
        scanf("%d", &cooperados[i].quantidadeEnviada);

        printf("Total em R$ da produção entregue: R$ ");
        scanf("%f", &cooperados[i].totalProducao);

        printf("Data de associação (Ano Mês Dia): ");
        scanf("%d %d %d", &cooperados[i].dataAssociacaoAno, &cooperados[i].dataAssociacaoMes, &cooperados[i].dataAssociacaoDia);
        
        // Limpar o buffer do teclado
        while (getchar() != '\n');
    }
}

void exibirBeneficiados(Cooperado cooperados[]) {
    int i;
    float totalDesembolsado = 0.0;

    qsort(cooperados, NUM_COOPERADOS, sizeof(Cooperado), compare);

    printf("\nCooperados beneficiados com a promoção:\n");
    printf("----------------------------------------------------\n");
    printf("| %-4s | %-20s | %-10s | %-10s |\n", "Pos.", "Nome", "Quantidade", "Prêmio (%)");
    printf("----------------------------------------------------\n");

    for (i = 0; i < NUM_BENEFICIADOS; i++) {
        cooperados[i].premio = 20.0 - i * 2.0;
        float valorPremio = cooperados[i].totalProducao * cooperados[i].premio / 100.0;
        totalDesembolsado += valorPremio;

        printf("| %-4d | %-20s | %-10d | %-10.2f |\n", i + 1, cooperados[i].nome, cooperados[i].quantidadeEnviada, cooperados[i].premio);
    }

    printf("----------------------------------------------------\n");
    printf("Total desembolsado pela cooperativa: R$ %.2f\n", totalDesembolsado);
}

int main() {
    Cooperado cooperados[NUM_COOPERADOS];

    cadastrarCooperados(cooperados);

    exibirBeneficiados(cooperados);

    return 0;
}
