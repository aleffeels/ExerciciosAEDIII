#include<bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<pair<int,string>,int> &a,pair<pair<int,string>,int> &b)
{
    return (a.second > b.second);
}

const int n=3;

main()
{
    vector<pair<pair<int,string>,int> >gaveta;
    int i,matricula;
    double nota;
    string nome;
    for(i=0; i<n; i++)
    {
        cin>>matricula;
        cin>>nome;
        cin>>nota;
        gaveta.push_back(make_pair(make_pair(matricula,nome),nota));
    }
    cout<<"Antes de aplicar o sort estava assim: "<<endl;
    for(i=0; i<gaveta.size(); i++)
    {
        cout <<gaveta[i].first.first << " - " << gaveta[i].first.second <<" - "<<gaveta[i].second<<  endl;
    }

    sort(gaveta.begin(), gaveta.end(), sortbysec);
    cout<<"Depois de aplicar o sort ficou assim: "<<endl;
    for(i=0; i<gaveta.size(); i++)
    {
        cout <<gaveta[i].first.first << " - " << gaveta[i].first.second <<" - "<<gaveta[i].second<<  endl;
    }
}
