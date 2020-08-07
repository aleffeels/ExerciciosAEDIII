#include<bits/stdc++.h>

using namespace std;
FILE *fp;
struct cad
{
    int mat, disp;
    char nome[30], endereco[50], curso[15];
};
struct cad c[1];
int main()
{
    int op=1;
    if((fp=fopen("coisa.dat", "wb+"))==NULL)
    {
        cout << "O arquivo nao pode ser aberto" << endl;
        exit(1);
    }
    while(op!=0)
    {
        cout << "1 Cadastrar" << endl;
        cout << "2 Remover" << endl;
        cout << "3 Consultar" << endl;
        cout << "4 Listar" << endl;
        cout << "0 Sair" << endl;
        cout << "Selecione uma opcao: ";
        cin >> op;
        switch(op)
        {
        case(1):
            system("cls");
            cout << "Matricula: ";
            cin >> c[0].mat;
            getchar();
            cout << "Nome: ";
            cin >> c[0].nome;
            cout << "Endereco: ";
            cin >> c[0].endereco;
            cout << "Curso: ";
            cin >> c[0].curso;
            c[0].disp=1;
            fwrite(&c, sizeof(struct cad), 1, fp);
            cout<<endl;
            break;
        case(2):
            rewind(fp);
            system("cls");
            FILE *temp;
            int mat2, loc2, num;
            char ch;
            cout << "Matricula: ";
            loc2=0, num=0;
            cin >> mat2;
            if((temp=fopen("coisatp.dat", "wb+"))==NULL)
            {
                cout << "O arquivo nao pode ser aberto" << endl;
                exit(1);
            }
            while(fread(&c, sizeof(struct cad), 1, fp)!=NULL)
            {
                if(c[0].mat==mat2 && c[0].disp==1)
                {
                    c[0].disp=0;
                    loc2=1;
                }
                fwrite(&c, sizeof(struct cad), 1, temp);
            }
            if(loc2==0)
            {
                cout << "Nao encontrado\n" << endl;
                fclose(temp);
            }
            else if(loc2==1)
            {
                fclose(fp);
                fclose(temp);
                if((fp=fopen("coisa.dat", "wb+"))==NULL)
                {
                    cout << "O arquivo nao pode ser aberto" << endl;
                    exit(1);
                }
                if((temp=fopen("coisatp.dat", "rb"))==NULL)
                {
                    cout << "O arquivo nao pode ser aberto" << endl;
                    exit(1);
                }
                while(fread(&c, sizeof(struct cad), 1, temp)!=NULL)
                    fwrite(&c, sizeof(struct cad), 1, fp);
                cout << endl;
            }
            fclose(temp);
            break;
        case(3):
            rewind(fp);
            system("cls");
            cout << "Matricula: ";
            int mat, loc;
            loc=0;
            cin >> mat;
            while(fread(&c, sizeof(struct cad), 1, fp)!=NULL)
            {
                if(c[0].mat==mat && c[0].disp==1)
                {
                    printf("%d %s %s %s\n\n", c[0].mat, c[0].nome, c[0].endereco, c[0].curso);
                    loc=1;
                }
            }
            if(loc==0)
                cout << "Nao encontrado\n" << endl;
            break;
        case(4):
            rewind(fp);
            system("cls");
            while(fread(&c, sizeof(struct cad), 1, fp)!=NULL)
                if(c[0].disp==1)
                    printf("%d %s %s %s\n", c[0].mat, c[0].nome, c[0].endereco, c[0].curso);
            cout<<endl;
            break;
        case(0):
            return(0);
            break;
        default:
            system("cls");
            cout << "Opcao invalida." << endl;
            break;
        }
    }
    return(0);
}
