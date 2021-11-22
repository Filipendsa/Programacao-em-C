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
        printf("Nao foi possivel abrir o arquivo");
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
    int n, c = 0, opcao = 0, qtd, cpf = 0, count = 0;
    char produto[30], carrinho[tamanho][30];
    printf("\nDigite o seu CPF para a Compra: ");
    scanf("%d", &cpf);
    do
    {
        printf("\nEscolha o produto:  (Ex. 'Arroz' 2)\n");
        setbuf(stdin, NULL);
        gets(produto);

        printf("Agora a quantidade: (Ex. Arroz '2', (pacotes))");
        scanf("%d", &qtd);

        int result = 0;
        for (n = 0; n <= tamanho; n++)
        {
            result = strncmp(produto, produtoA[n], 30);
            if (result == 0)
            {
                carrinho[c][0] = produto;
                c++;
            }
        }
        if (c == 0)
        {
            printf("Produto nao cadastrado!");
        }
        printf("\nDeseja finalizar a compra? (0-> nao  1-> sim)");
        scanf("%d", &opcao);
    } while (opcao == 0);

    FILE *arquivo;
    arquivo = AbreArquivo('a', "bancoDados/vendas.txt");
    fprintf(arquivo, "Inicio da Compra, CPF - %d\n", cpf);
    for (int l = 0; l < c; l++)
    {
        fprintf(arquivo, "%s - %d\n", carrinho[l], qtd);
    }
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
    char produto[30];
    int quantidade;

    arquivo = AbreArquivo('l', "bancoDados/vendas.txt");

    while (!feof(arquivo))
    {
        fscanf(arquivo, "%s - %d ", &produto, &quantidade);
        printf("Produtos: %s  -  Quantidade: %d\n", produto, quantidade);
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
        printf("Nome: %s  -  Telefone: %d\n", nome, telefone);
    }
    FecharArquivo(arquivo);
}
void arte()
{
    system("cls");
    printf("          .:-:::::::...                              ");
    printf("\n    :+#$$$$$$#####+                                ");
    printf("\n  .*###$$$$$$$$$$$+===-----------=================-");
    printf("\n  .####$$########$**+++**++++++++++++++++======---=");
    printf("\n  .####$##########*##*#$$##*++++++=++======----+++=");
    printf("\n  .####$########$#*$$$##$###*=========--------+*##*");
    printf("\n  .#$$#$##########*$$$$###$#+---------:--==*++#*##*");
    printf("\n  .$$$$$######*++**$$$#####$+==:::..===****$###*###");
    printf("\n  .$$$$$##***#*++**$#$$##$#$#=*+++=***+##*$######$#");
    printf("\n  .$$$$$##*********$######$#*=##++#######$$$##$$$$#");
    printf("\n  .$$$$$##*********$$#$######**+=*#$$$$$#$$$$$$$$$#");
    printf("\n  .$$$$$###********##==*##=:::::=+*####$$$$$$$$@$$#");
    printf("\n  .$$$$$########*#*+---:==---:::---=+*###$@@@@@@@$#");
    printf("\n  .$$$$$##########**+++####*+*#**#############$$$##");
    printf("\n  .$$$$$#########*##***##########$$##############* ");
    printf("\n  .$$$$$$$$$$$$$$$+              .$#               ");
    printf("\n  .#$$$$$$$$$*#$$$+         -=---=$$---==:         ");
    printf("\n    :+$$$$$$$$$###-        :##*+++#*+++*##.        ");
    printf("\n\n\tBem Vindo ao programa da nossa Loja\n");
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

        printf("\n         MENU");
        printf("\n 1 - Listar Todos Produtos");
        printf("\n 2 - Comprar Produtos");
        printf("\n 3 - Cadastrar Clientes");
        printf("\n 4 - Listar venda");
        printf("\n 5 - Listar Clientes");
        printf("\n 6 - Sair");

        printf("\nDigite uma opcao: ");
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
            printf("Cadastro de Clientes\n");
            printf("\nDigite o nome do Cliente: ");
            setbuf(stdin, NULL);
            gets(nome);
            printf("\nDigite o telefone: ");
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
            printf("\n\nFinalizando...\n\n");
            system("pause");
            exit(0);
            break;

        default:
            printf("\n\nOpcao invalida! Tente Novamente!\n\n");
            system("pause");
        }
    } while (condicao);

    return 0;
}
