#include<bits/stdc++.h>
#include<string.h>
#include<locale.h>
using namespace std;
FILE *fp;
char str[256];
char b[256];

void binario(char *compactaStr, char *compactaBinario)
{
    int i = 0, digito = strlen(compactaStr);
    int dec = 0;
    int bin = 0;
    while(i<=digito)
    {
        if(compactaStr[i]=='a')
        {
            strcat(compactaBinario,"00");
        }
        if(compactaStr[i]=='b')
        {
            strcat(compactaBinario,"01");
        }
        if(compactaStr[i]=='c')
        {
            strcat(compactaBinario,"10");
        }
        if(compactaStr[i]=='d')
        {
            strcat(compactaBinario,"11");
        }
        i++;
    }
}

void dividir(char *letras, int tamanho)
{
    int contador=0, int i=0, int j=0;
    matriz[tamanho][9];
    for(i=tamanho-1; i=0; i--)
    {
        for(j=0;j<4;j++){

        }
    }

}

int main()
{
    int tamanho=0;
    setlocale(LC_ALL, "Portuguese");
    if((fp=fopen("arquivo.txt","w"))==NULL)
    {
        cout << "Este arquivo nao pode ser aberto";
        exit (1);
    }
    cout << "Digite o que deseja compactar:" << "\n";
    gets(str);
    fputs(str,fp);
    binario(str,b);
    cout << "Binario é = " << b;
    tamanho=strlen(b);
    dividir(b,tamanho);

    fclose(fp);
    return 0;
}
