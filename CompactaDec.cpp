//Transformando texto de binário para decimal
#include <bits/stdc++.h>

using namespace std;

char texto[100],bin[1000];
int decimal[100];


int convBin(){
	int cont=0;
	for(int i=0;i<strlen(bin);i++){
		if(bin[i]=='1'){
			if(i%8==0)decimal[cont]+=128;
			else if(i%8==1)decimal[cont]+=64;
			else if(i%8==2)decimal[cont]+=32;
			else if(i%8==3)decimal[cont]+=16;
			else if(i%8==4)decimal[cont]+=8;
			else if(i%8==5)decimal[cont]+=4;
			else if(i%8==6)decimal[cont]+=2;
			else if(i%8==7)decimal[cont]+=1;
		}
		if(i%8==7)cont++;
	}
	return cont;
}

int main(){

	scanf("%s",texto);
	for(int i=0;i<strlen(texto);i++){
		if(texto[i]=='a'){
			strcat(bin,"00");
		}else if(texto[i]=='b'){
			strcat(bin,"01");
		}else if(texto[i]=='c'){
			strcat(bin,"10");
		}else if(texto[i]=='d'){
			strcat(bin,"11");
		}
	}


	int t = convBin();
	for(int i=0,j=0;i<strlen(bin);i++){
		printf("%c ",bin[i]);
		if(i%8==7){
			printf(" -> %d -> %c \n",decimal[j],decimal[j]);
			j++;
		}
	}
	printf("Texto reduzido: ");
	for(int i=0;i<t;i++)printf("%c",decimal[i]);
	printf("\n");

	return 0;
}
