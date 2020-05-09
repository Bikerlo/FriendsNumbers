#include <iostream>

using namespace std;

long int hallarNumerosAmigos(long int numero1,int &k){
	long int resultado1=0,resultado2=0,numero2=0;
    for(int i=1;i<=numero1/2;i++){
		if(numero1%i==0){
			resultado1+=i;
		}
	}
	numero2=resultado1;
	for(int i=1;i<=numero2/2;i++){
		if(numero2%i==0){
			resultado2+=i;
		}
	}
	if(numero1==resultado2 && numero2==resultado1 && resultado1!=resultado2){
		cout<<"pareja "<<k+1<<": "<<numero1<<" - "<<numero2<<endl;
		k++;
		return numero2;
	}else{
		return 0;
	}
}
int main()
{
    long int resultado1=0,resultado2=0,numero1=0,numero2=0;
	long int cantidadNumeros=0;
	bool evaluar=true;
	long int numAmigo[100][2];
	int k=0;
	cout<<"\n\t ---Numeros Amigos---\n";
	cout<<"\n\t Parejas entre 1 y n\n";
	cout<<"Digite el rango para hallar numero amigos: ";
	cin>>cantidadNumeros;
	for(int i=1;i<=cantidadNumeros;i++){
		for(int j=0; j<=k;j++){
			if(i==numAmigo[j][1] || i==numAmigo[j][0]){
				evaluar=false;
			}
		}
		if(evaluar==true){
			numAmigo[k][1]=hallarNumerosAmigos(i,k);
			if(numAmigo[k][1]!=0){
				numAmigo[k][1]=numAmigo[k][1];
				numAmigo[k][0]=i;
			}
		}
		evaluar=true;
	}
    return 0;
}
