#include <iostream>
using namespace std;


int main() {
	
int	volta[6];
	int maior=0;
int media =0;
	
		for(int i=0;i<6;i++){
			cout<<"Digite o tempo do piloto"<<endl;
			cin>>volta[i];
				if(volta>maior){
					maior=volta[i]
				}
			media=maior/6;	
		}
	

	
	return 0;
}
