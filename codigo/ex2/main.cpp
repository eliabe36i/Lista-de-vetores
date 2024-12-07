#include <iostream>
using namespace std;

int main() {
	
int	vet [50];
int media;
int soma ;
for (int i=0; i<50;i++){
	cout<<"================================"<<endl;
	cout<<"+  Digite o numero da posicao +"<<endl;
	cout<<"+           "<<i<<"            "<<endl;
	cout<<"================================"<<endl;
	cin>>vet[i];
	
}	
for (int i=0;i<50;i++){
soma=soma+vet[i];
	media=soma/50;

	cout<<media;
}
	return 0;
}
