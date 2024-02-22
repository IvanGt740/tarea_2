#include <iostream>
using namespace std;

main(){
	
	//numero es positivo>0 o negativo<0
	int num=0;
	cout<<"Ingrese el Numero: ";
	cin>>num;
	if(num>0){
		
		//entra a aca cuando la condicion es verdadera
		cout<<"El numero es positivo"<<endl;
	}
	else{
		if(num==0){
			//Anidación
			cout<<"El numero es neutro"<<endl;	
		}
		else{
			//entra a aca cuando la condicion es falsa
			cout<<"El numero es negativo"<<endl;
		}
	}
		
	system("pause");
	
}
