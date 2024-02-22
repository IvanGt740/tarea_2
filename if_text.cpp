#include <iostream>
using namespace std;

main(){
	
	//and (y) && "ambos true = true" 
	//or  (o) || "al menos uno true = true"
	
	char lapiz,lapicero,cuaderno;
	
	cout<<"Trae lapiz: (s/n)";
	cin>>lapiz;
	cout<<"Trae lapicero: (s/n)";
	cin>>lapicero;
	cout<<"Trae cuaderno: (s/n)";
	cin>>cuaderno;
	/*
	//puede entrar a mi clase si usted trae un lapiz y un lapicero
		if(lapiz=='s' && lapicero=='s'){
			cout<<"Ingresa"<<endl;
		}
		else{
			cout<<"Lo siento no puede ingresar"<<endl;
		}
	*/
	/*
	//puede entrar a mi clase si usted trae un lapiz o un lapicero
	if(lapiz=='s' || lapicero=='s'){
			cout<<"Ingresa"<<endl;
		}
		else{
			cout<<"Lo siento no puede ingresar"<<endl;
		}
	*/	
	//puede entrar a mi clase si usted trae un lapiz o un lapicero y un cuaderno
	if((lapiz=='s' || lapicero=='s') && cuaderno =='s'){
			cout<<"Ingresa"<<endl;
		}
		else{
			cout<<"Lo siento no puede ingresar"<<endl;
		}
}
