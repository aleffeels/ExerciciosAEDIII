#include<bits/stdc++.h>
using namespace std;

main()
{
    vector<int>a,b;
    int i=0,j=0,x,y,k=0;
    set<int>aux;
    set<int>::iterator iter; // Vamos usar esse iterador pra conseguir printar os elementos do set dentro de um laço de repetição.

    //Verificando se algum dos dois está vazio para então adicionar elementos.
    if(a.empty() || b.empty())
    {
        cout<<"Insira os elementos do primeiro e do segundo vector (nessa ordem):"<<endl;

        //Leitura dos 10 elementos de cada vector
        for(i=0; i<10; i++)
        {
            cin>>x>>y;
            a.push_back(x); // guarda no vector "a", os elementos lidos em "x".
            b.push_back(y); // guarda no vector "b", os elementos lidos em "y".
        }

        /*//Conferindo se realmente fiz a leitura. Nunca se sabe, né?...
        for(i=0; i<a.size(); i++)
        {
            cout<<a[i]<<endl;
        }
        for(i=0; i<b.size(); i++)
        {
            cout<<b[i]<<endl;
        }*/

        //Esse for serve para comparar os dois vectors. Se a==b, então eu insiro o elemento em k e passo para..
        //.. "aux" que já vai cumprir o que se pede por ser um "set" _ que é não adcionar elementos repetidos.
        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {
                if(a[i]==b[j])
                {
                    k=a[i];
                    aux.insert(k);
                }
            }
        }

        //Exibindo a resposta do exercício. Elementos que estão em a&b simultaneamente, sem mencionar mais de uma vez:
        for(iter=aux.begin(); iter!=aux.end(); iter++)
        {
            cout<<*iter<<endl;
        }
    }
}

