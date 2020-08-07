
#include <stdio.h>
#include <bits/stdc++.h>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    char str[80],arquivonew[110];
    cout<<"Entre com o nome do arquivo que deseja criar/abrir:\n";
    gets(arquivonew);
    if((fp=fopen(arquivonew, "w"))==NULL)
    {
        printf("arquivo não pode ser aberto\n");
        exit(1);
    }
    do
    {
        printf("Digite a frase que deseja passar para o arquivo: (dê dois enters se quiser sair do programa) : \n");
        gets(str);
        strcat(str, "\n");
        fputs(str, fp);
    }
    while(*str != '\n' );
}
