#include <bits/stdc++.h>
using namespace std;

int main(){

	string aux,aux2;
	printf("Entre com os binario curto:");
	cin >> aux;
	bitset<4> seq1(aux);
	printf("Binario longo:");
	cin >> aux2;
	bitset<12> seq2(aux2);
	int cont=0;
	for(int i=0;i<12;i++){
		if(i<=9 && seq1[0]==seq2[i]){
			if(seq1[1]==seq2[i+1]){
				if(seq1[2]==seq2[i+2]){
					if(seq1[3]==seq2[i+3])cont++;
				}
			}
		}
	}
	cout << "Repeticoes:" << cont << endl;
	bitset <12> ajuda(aux+aux+aux);
	cout << "Sequencia curta: " << seq1 << endl;
	cout << "Sequencia longa: " << seq2 << endl;
	cout << "Sequencia concatenada: " << ajuda << endl;
	cout << "E: " << (ajuda&seq2) << endl;
	cout << "Ou: " << (ajuda|seq2) << endl;
	cout << "Xor : " << (ajuda^seq2) << endl;


	return 0;
}
