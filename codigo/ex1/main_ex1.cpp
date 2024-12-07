#include <iostream>
using namespace std;

int main() {
	
	int vet[10];
	
for (int i=0;i<10;i++){
	cout<<"Digite um numero na ordem do vetor "<<">>"<<i<<endl;
	cin>>vet[i];
}
	for (int i=10;i>0;i--){
		cout<<vet[i]<<"|"<<endl;
	}
	return 0;
}
