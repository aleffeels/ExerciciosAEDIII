//Tabela Hash - Inserir, Pesquisa, Exibe, Deleta
#include <bits/stdc++.h>
#define TAM 20

struct dado
{
    int morte;
    int chave;
};

struct dado* Hash[TAM];
struct dado* corpo;
struct dado* item;

int hashing(int chave)
{
    return chave % TAM;
}

struct dado *pesquisa(int chave)
{
    int indice = hashing(chave);
    while(Hash[indice] != NULL)
    {

        if(Hash[indice]->chave == chave)
            return Hash[indice];

        ++indice;

        indice %= TAM;
    }

    return NULL;
}

void insere(int chave,int morte)
{

    struct dado *item = (struct dado*) malloc(sizeof(struct dado));
    item->morte = morte;
    item->chave = chave;

    int indice = hashing(chave);

    while(Hash[indice] != NULL && Hash[indice]->chave != -1) // Não encontrei como excluir, mas isso faz com que outro elemento possa ser colocado no lugar desse sem problemas, é como se marcasse ele como "espaço disponível". Deixei pra ultima hora e não vai dar tempo de caprichar.
    {
        ++indice;
        indice %= TAM;
    }

    Hash[indice] = item;
}

struct dado *deleta(struct dado* item)
{
    int chave = item->chave;
    int indice = hashing(chave);
    while(Hash[indice] != NULL)
    {

        if(Hash[indice]->chave == chave)
        {
            struct dado* temp = Hash[indice];
            Hash[indice] = corpo;
            return temp;
        }

        ++indice;

        indice %= TAM;
    }

    return NULL;
}

void printa()
{
    int i = 0;

    for(i = 0; i<TAM; i++)
    {

        if(Hash[i] != NULL)
            printf(" (%d,%d)",Hash[i]->chave,Hash[i]->morte);
        else
            printf(" . ");
    }

    printf("\n");
}

int main()
{
    corpo = (struct dado*) malloc(sizeof(struct dado));
    corpo->morte = -1;
    corpo->chave = -1;

    insere(1, 17);
    insere(2, 69);
    insere(3, 79);
    insere(4, 44);
    insere(5, 25);
    insere(6, 35);
    insere(7, 19);
    insere(8, 97);
    insere(9, 78);
    insere(10, 35);
    insere(12, 77);

    printa();
    item = pesquisa(10);

    if(item != NULL)
    {
        printf("Elemento encontrado: %d\n", item->morte);
    }
    else
    {
        printf("Elemento nao encontrado.\n");
    }

    deleta(item);
    item = pesquisa(37);

    if(item != NULL)
    {
        printf("Elemento encontrado: %d\n", item->morte);
    }
    else
    {
        printf("Elemento nao encontrado.\n");
    }
    printa();
}
