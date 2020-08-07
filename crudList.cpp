#include<bits/stdc++.h>
#include<locale.h>

using namespace std;
main()
{
    setlocale (LC_ALL, "Portuguese"); // Permite caracteres especiais
    map<string,string> familia; // Criamos o map "familia"
    map<string,string>::iterator it; // itator pra localizar indices
    int casos; //entrada do menu
    string a, b, consulta;  //nome, sobrenome, variavel usada na busca


    do // Repetição do menu até que o "casos" digitado seja = "4"
    {
        cout<<"\n____Menu____"<<endl;
        cout<<"1- Inserir"<<endl;
        cout<<"2- Consultar"<<endl;
        cout<<"3- Listar todos"<<endl;
        cout<<"4- Sair\n"<<endl;
        cin>>casos;

        switch(casos)
        {
        case 1 : // Inserir
            cout<<"Digite o nome e depois o sobrenome da criança: ";
            cin>>a>>b;
            familia.insert(pair<string,string>(a,b)); //Criação de um pair de duas strings para o map "familia"
            break;

        case 2 : // Consultar
            cout<<"Digite o sobrenome para consulta: ";
            cin>>consulta;
            cout<<"\nA consulta retornou os seguintes nomes: "<<endl;
            for(it=familia.begin(); it!=familia.end(); it++)
            {
                if(it->second==consulta)
                {
                    cout<<it->first<<" "<<it->second<<endl;
                }
            }
            break;

        case 3 : //Listar todos
            cout<<"Lista completa: "<<endl;
            for(it=familia.begin(); it!=familia.end(); it++)
            {
                cout<<it->first<<" "<<it->second<<endl;
            }
            break;

        case 4 : // Sair
            cout<<"Encerrado!"<<endl;
            exit(0);
            break;

        default :
            printf ("Entrada inválida!\n");
        }
    }
    while(casos!=4);
}
