typedef struct
{
    char rua[100], bairro[30];
    int nro;
    char cep[10], cidade[50], estado[3];
} endereco;

typedef struct
{
    int dia, mes, ano;
} data;

typedef struct
{
    char nome[50];
    float teor, valor;
} bebida;

typedef struct
{
    int id, open; //id: numero identificador do evento | open: 1-SIM 0-NAO
    char nome[100], local[100];
    data agenda;
    endereco end;
    int ingressos;
    float custos, lucro;
    float popular, normal, especial;
    bebida drinks[4];
    int popvend, normvend, especvend;
} cadastro;
