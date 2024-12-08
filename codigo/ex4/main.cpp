#include <iostream>

using namespace std;

int main() {
	
	int vet[10];
	int soma =0 ;
	
		for(int i=0;i<10;i++){
			cout<<"Digite o numero que deseja somar"<<endl;
			cin>>vet[i];
		if(vet[i]/2!=0){
			soma=soma+vet[i];
		}
		}
		cout<<soma<<endl;
	return 0;
}
