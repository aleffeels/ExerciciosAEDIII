#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{

    char mensagem[150];
    char c_mensagem[150];
    int tam;
    int i;
    printf("\n Digite texto ou palavra a ser criptografada:");
    gets(mensagem);
    tam = strlen(mensagem);
    printf("\n Texto criptografado eh :");
    int auxiliar;
    for(i=0; i<tam; i++)
    {
        auxiliar=mensagem[i];
        auxiliar = (auxiliar + 25)%256;
        if(auxiliar < 0)auxiliar+=256;
        c_mensagem[i]=(char)auxiliar;

    }
    printf("%s\n",c_mensagem);

    printf("\n\n Digite o texto:");
    gets(c_mensagem);
    tam = strlen(c_mensagem);
    for(i=0; i<tam; i++)
    {

        mensagem[i] = c_mensagem[i]-25;

    }
    printf("\n Texto descriptogrado eh: %s\n",mensagem);
    return 0;
    getch();

}
