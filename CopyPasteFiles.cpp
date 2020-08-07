//Copiando e colando informações de um arquivo com algoritmo C++
#include<bits/stdc++.h>

int main(){
    FILE *arq1, *a2;
    char AL[80], EF[80], c;
    printf("Entre com o nome do arquivo a ser copiado: ");
    gets(AL);

    if((arq1=fopen(AL, "r"))==NULL){
        printf("Arquivo %s nao pode ser aberto\n", AL);
        exit(1);
    }
    printf("Entre com o nome do arquivo de destino: ");
    gets(EF);
    if((a2=fopen(EF, "w"))==NULL){
        printf("Arquivo %s nao pode ser aberto\n", EF);
        exit(1);
    }
    while (!feof(arq1)){
        c=getc(arq1);
        putc(c, a2);
    }
    fclose(arq1);
    fclose(a2);
    return(0);
}


