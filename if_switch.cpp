#include <iostream>
using namespace std;
main(){
	int codigo=0;
	cout <<"Ingrese codigo de area: ";
	cin>>codigo;
	
	//No eficiente
	/*
	if(codigo==502){
		cout<<"Guatemala"<<endl;
	}
	if(codigo==503){
		cout<<"El Salvador"<<endl;
	}
	if(codigo==504){
		cout<<"Honduras"<<endl;
	}
	if(codigo==502){
		cout<<"Nicaragua"<<endl;
	}
	*/
	
	//Eficiente
	switch(codigo){
		case 502 : 
			cout<<"Guatemala"<<endl;
			break;
		case 503 : 
			cout<<"Belice"<<endl;
			break;
		case 504 : 
			cout<<"El Salvador"<<endl;
			break;
		case 505 : 
			cout<<"Honduras"<<endl;
			break;
		case 506 : 
			cout<<"Nicaragua"<<endl;
			break;
		case 507 : 
			cout<<"Costa Rica"<<endl;
			break;
		case 508 : 
			cout<<"Panama"<<endl;
			break;
		default :
			cout<<"Este codigo no es de centroamerica"<<endl;	
	}
}
