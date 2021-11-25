#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

FILE *AbreArquivo(char modo, char caminho[30])
{
    FILE *arquivo;
    switch (modo)
    {
    case 'g':
        arquivo = fopen(caminho, "wt");
        break;
    case 'l':
        arquivo = fopen(caminho, "rt");
        break;
    case 'a':
        arquivo = fopen(caminho, "a");
        break;
    }
    if (arquivo == NULL)
    {
        printf("NAO FOI POSSIVEL ABRIR O ARQUIVO!");
        exit(0);
    }
    return arquivo;
}

void FecharArquivo(FILE *arquivo)
{
    fclose(arquivo);
}

void comprarProdutos(char produtoA[][30], int tamanho)
{
    int n, c = 0, opcao = 0, qtd, count = 0;
    long long int cpf = 0;
    char produto[30], charCpf[12];
    printf("\n\nDIGITE O SEU CPF PARA A COMPRA: \n->");
    scanf("%lld", &cpf);
    lltoa(cpf,charCpf,10);
    printf("\n%s", charCpf);

    FILE *arquivo;
    arquivo = AbreArquivo('a', "bancoDados/vendas.txt");
    fprintf(arquivo, "CPF - %s\n", charCpf);

    do
    {
        printf("\n\nESCOLHA O PRODUTO: (Ex. 'Arroz' )\n->");
        setbuf(stdin, NULL);
        gets(produto);

        printf("\n\nESCOLHA A QUANTIDADE: (Ex. '2' (NUMERO DE PACOTES))\n->");
        scanf("%d", &qtd);

        int result = 0;
        for (n = 0; n <= tamanho; n++)
        {
            result = strncmp(produto, produtoA[n], 30);
            if (result == 0)
            {
                produto[n] += produto[30];
                c++;
            }
        }
        if (c == 0)
        {
            printf("\n\nPRODUTO NAO CADASTRADO!\n\n");
        }
        else
        {
            fprintf(arquivo, "%s - %d\n", produto, qtd);
        }

        printf("\n\nDESEJA FINALIZAR A COMPRA? \n0-> nao \n1-> sim\n-->");
        scanf("%d", &opcao);

    } while (opcao == 0);

    fprintf(arquivo, "\n");
    FecharArquivo(arquivo);
}

void CadastraClientes(char nome[30], int telefone)
{
    FILE *arquivo;
    arquivo = AbreArquivo('a', "bancoDados/cadastros.txt");
    fprintf(arquivo, "%s %d\n", nome, telefone);
    FecharArquivo(arquivo);
}

void ListarProdutos(int opcao)
{
    FILE *arquivo;
    int telefone, i = 0;
    char arrayProduto[90][30];
    arquivo = AbreArquivo('l', "bancoDados/produtos.txt");

    while (!feof(arquivo))
    {

        fscanf(arquivo, "%s", &arrayProduto[i][0]);
        printf("%s\n", arrayProduto[i]);
        i++;
    }
    FecharArquivo(arquivo);
    if (opcao == 1)
    {
        comprarProdutos(arrayProduto, i);
    }
}

void ListarVendas()
{
    FILE *arquivo;
    char produto[30], quantidade[30];
    arquivo = AbreArquivo('l', "bancoDados/vendas.txt");

    while (!feof(arquivo))
    {
        fscanf(arquivo, "%s - %s ", &produto, &quantidade);
        printf("%s  -  %s\n", produto, quantidade);
    }
    FecharArquivo(arquivo);
}

void ListarClientes()
{
    FILE *arquivo;
    char nome[30];
    int telefone;

    arquivo = AbreArquivo('l', "bancoDados/cadastros.txt");

    while (!feof(arquivo))
    {
        fscanf(arquivo, "%s %d ", &nome, &telefone);
        printf("NOME: %s  -  TELEFONE: %d\n", nome, telefone);
    }
    FecharArquivo(arquivo);
}
void arte()
{
    system("cls");
    printf("...............................................................................");
    printf("\n...............................................................................");
    printf("\n...............................................................................");
    printf("\n...............................................................................");
    printf("\n.......#WW:.............+WWWWWWWWWWW#-......-####===#W#===#@@-..#WW*...........");
    printf("\n.......#WW*............#W#.......-=WWW@.............:W*........+W@*W=..........");
    printf("\n.......*WW*...........*W@............#W+............-W*........#W+.:W+.........");
    printf("\n.......*WW+...........@W+............#W+............-W=.......:W#...+W+........");
    printf("\n.......*WW+..........-WW-............#W-............-W#.......@W:....@W:.......");
    printf("\n.......+WW+..........-W#.............#W-............-W@......+WWWWWWWWW@.......");
    printf("\n.......:WW+..........-W#............:WW.............-WW-....-WW***+:::#W*......");
    printf("\n.......-WW+...........=W-...........@W*...=W:.......:WW-....@W+........@W......");
    printf("\n........WW+............=W:.........#W#....+W*......+WW=....@W=.........:W@.....");
    printf("\n........WW:.............-#WW@@@@@WW@:......=W:....#WW:....#W#...........+W=....");
    printf("\n........@WWWWWWWWWWWWWW#....................:WWWWW#:......+*.............+*....");
    printf("\n...............................................................................");
    printf("\n...............................................................................");
    printf("\n...........FELIPE NOGUEIRA........HENRIQUE SS........HENRIQUE PALMA............");
    printf("\n...............................................................................");
    printf("\n........................PROFESSOR -- ALCIOMAR HOLLANDA.........................");
    printf("\n\n\n\t\tBEM VINDO AO PROGRAMA DA NOSSA LOJA\n\n\n");
    system("pause");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    int opcao;
    char nome[30];
    int telefone;
    bool condicao = true;
    arte();
    do
    {

        printf("\n\n         MENU");
        printf("\n 1 - Listar Todos Produtos");
        printf("\n 2 - Comprar Produtos");
        printf("\n 3 - Cadastrar Clientes");
        printf("\n 4 - Listar Vendas");
        printf("\n 5 - Listar Clientes");
        printf("\n 6 - Sair");

        printf("\n\n\n DIGITE UMA OPCAO: \n->");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao)
        {
        case 1:
            ListarProdutos(0);
            system("pause");
            break;
        case 2:
            ListarProdutos(1);
            system("pause");
            break;
        case 3:
            printf("CADASTRO DE CLIENTES\n");
            printf("\nDIGITE O NOME DO CLIENTE: \n->");
            setbuf(stdin, NULL);
            gets(nome);
            printf("\nDIGITE O TELEFONE: \n->");
            scanf("%d", &telefone);
            CadastraClientes(nome, telefone);
            system("pause");
            break;
        case 4:
            ListarVendas();
            system("pause");
            break;
        case 5:
            ListarClientes();
            system("pause");
            break;
        case 6:
            printf("\n\nFINALIZANDO...\n\n");
            exit(0);
            break;

        default:
            printf("\n\nOPCAO INVALIDA! TENTE NOVAMENTE!\n\n");
            system("pause");
        }
    } while (condicao);

    return 0;
}