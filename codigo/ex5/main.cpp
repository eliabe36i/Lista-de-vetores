#include <iostream>
using namespace std;

int main() {
	
int v[5];	
int t[5];
int maior =0;

	
	for(int i=0;i<5;i++){
		
		cout<<"Digite o  numero do valor do vetor"<<endl;
		cin>>v[i];
			if(v[i]>maior){
				maior=v[i];
		}}
		for (int i=0;i<5;i++){
			t[i]=v[i]*maior;
		cout<<t[i]<<endl;
		}
	
	return 0;
}
