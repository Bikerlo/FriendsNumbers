#include <iostream>

using namespace std;


long int hallarNumerosAmigos(long int numero1){
	long int resultado1=0,resultado2=0,numero2=0;
    for(int i=1;i<numero1;i++){
		if(numero1%i==0){
			resultado1+=i;
		}
	}
	numero2=resultado1;
	for(int i=1;i<numero2;i++){
		if(numero2%i==0){
			resultado2+=i;
		}
	}
	if(numero1==resultado2 && numero2==resultado1 && resultado1!=resultado2){
		cout<<"son numeros amigos el "<<numero1<<" y "<<numero2<<endl;
		return numero2;
	}else{
		return 0;
	}
}
int main()
{
    long int resultado1=0,resultado2=0,numero1=0,numero2=0;
	long int cantidadNumeros=0;
	long int evitarNumero=0,auxEvitarNumero=0;
	cout<<"\n\tNumeros Amigos\n\n";
	cout<<"digite un numero: ";
	cin>>numero1;
	cout<<"digite otro numero: ";
	cin>>numero2;
	for(int i=1;i<numero1;i++){
		if(numero1%i==0){
			cout<<i<<" ";
			resultado1+=i;
		}
	}
	cout<<"\n"<<resultado1<<"\n";
	
	for(int i=1;i<numero2;i++){
		if(numero2%i==0){
			cout<<i<<" ";
			resultado2+=i;
		}
	}
	cout<<"\n"<<resultado2<<"\n";
	
	if(numero1==resultado2 && numero2==resultado1){
		cout<<"son numeros amigos el "<<numero1<<" y "<<numero2<<endl;
	}else{
		cout<<"no son numeros Amigos";
	}
	cout<<"\n\n\t Parejas entre 1 y n\n\n";
	cout<<"Digite el rango para hallar numero amigos: ";
	cin>>cantidadNumeros;
	for(int i=1;i<=cantidadNumeros;i++){
		if(i!=auxEvitarNumero){
		evitarNumero=hallarNumerosAmigos(i);
			if(evitarNumero!=0){
				auxEvitarNumero=evitarNumero;
			}
		}
	}
    return 0;
}
