#include<bits/stdc++.h>
using namespace std;

main()
{
    vector<int>par,impar,copia;
    int i,x;
    if(par.empty() || impar.empty()) //verificando se algum dos dois est� vazio para ent�o adicionar elementos.
    {
        cout<<"Insira os elementos:"<<endl;

        for(i=0; i<12; i++) // leitura de doze elementos usando x como auxiliar para fazer a divis�o entre pares e impares
        {
            cin>>x;
            if(x%2==0) //se a divisao por 2 der resto 0 � par
            par.push_back(x); // guarda no vector "par"
            else impar.push_back(x); //se n�o for par � impar e ai guarda no vector impar
        }
        cout<<"Tamanho do vetor par = "<<par.size()<<endl;
        cout<<"Tamanho do vetor impar = "<<impar.size()<<endl;
        par.resize(8); // redimensiona o tamanho do vetor colocando zero na �ltima posi��o
        cout<<"Tamanho do vetor = "<<par.size()<<endl;

        for(i=0; i<par.size(); i++)
        {
            cout<<par[i]<<endl;
        }
        for(i=0; i<impar.size(); i++)
        {
            cout<<impar[i]<<endl;
        }
        impar.pop_back();
        copia=impar;
        sort(copia.begin(),copia.end());
        cout<<"Vetor ordenado:\n"<<endl;

        for(i=0; i<copia.size(); i++)
        {
            cout<<copia[i]<<endl;
        }
    }
}

